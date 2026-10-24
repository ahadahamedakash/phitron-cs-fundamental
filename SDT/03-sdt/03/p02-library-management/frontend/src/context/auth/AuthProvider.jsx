import { useEffect, useState } from "react";
import { baseUrl } from "../services/BaseUrl";
import { AuthContext } from "./AuthContext";

const AuthProvider = ({ children }) => {
  const [authUser, setAuthUser] = useState(null);
  const [loading, setLoading] = useState(
    () => !!localStorage.getItem("access_token"),
  );

  const accessToken = localStorage.getItem("access_token");

  useEffect(() => {
    if (!accessToken) return;

    let ignore = false;

    const fetchUser = async () => {
      try {
        const userRes = await fetch(`${baseUrl}/user`, {
          headers: {
            Authorization: `Bearer ${accessToken}`,
          },
        });

        if (!userRes.ok) {
          throw new Error("Failed to fetch user");
        }

        const userData = await userRes.json();

        if (!ignore) {
          setAuthUser(userData);
        }
      } catch (error) {
        console.error("Error fetching user:", error);

        if (!ignore) {
          setAuthUser(null);
        }
      } finally {
        if (!ignore) {
          setLoading(false);
        }
      }
    };

    fetchUser();

    return () => {
      ignore = true;
    };
  }, [accessToken]);

  const logout = () => {
    localStorage.removeItem("access_token");
    setAuthUser(null);
  };

  return (
    <AuthContext.Provider
      value={{ authUser, setAuthUser, logout, accessToken, loading }}
    >
      {children}
    </AuthContext.Provider>
  );
};

export default AuthProvider;
