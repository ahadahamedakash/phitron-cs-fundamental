import Container from "./Container";

const Navbar = () => {
  return (
    <nav className="w-full bg-base-100 shadow-sm">
      <Container>
        <div className="navbar min-h-16 px-0">
          <div className="navbar-start">
            <div className="dropdown">
              <button
                tabIndex={0}
                className="btn btn-ghost lg:hidden"
                aria-label="Open navigation menu"
              >
                <svg
                  xmlns="http://www.w3.org/2000/svg"
                  className="h-5 w-5"
                  fill="none"
                  viewBox="0 0 24 24"
                  stroke="currentColor"
                >
                  <path
                    strokeLinecap="round"
                    strokeLinejoin="round"
                    strokeWidth="2"
                    d="M4 6h16M4 12h8m-8 6h16"
                  />
                </svg>
              </button>

              <ul
                tabIndex={-1}
                className="menu menu-sm dropdown-content z-50 mt-3 w-52 rounded-box bg-base-100 p-2 shadow-lg"
              >
                <li>
                  <a href="/">Home</a>
                </li>
                <li>
                  <a href="/books">Browse Books</a>
                </li>
                <li>
                  <a href="/reservations">My Reservations</a>
                </li>
                <li>
                  <a href="/about">About Us</a>
                </li>
              </ul>
            </div>

            <a href="/" className="btn btn-ghost px-2 text-xl font-bold">
              <span className="text-primary">Book</span>Nest
            </a>
          </div>

          <div className="navbar-center hidden lg:flex">
            <ul className="menu menu-horizontal gap-1 px-1">
              <li>
                <a href="/">Home</a>
              </li>
              <li>
                <a href="/books">Browse Books</a>
              </li>
              <li>
                <a href="/reservations">My Reservations</a>
              </li>
              <li>
                <a href="/about">About Us</a>
              </li>
            </ul>
          </div>

          <div className="navbar-end">
            <a href="/login" className="btn btn-primary">
              Login
            </a>
          </div>
        </div>
      </Container>
    </nav>
  );
};

export default Navbar;
