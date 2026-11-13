from functools import wraps


def req_admin(func):
    @wraps(func)
    def wrapper(role, *args, **kwargs):

        if role != "admin":
            print("Unauthorized! Admins only")
            return

        return func(role, *args, **kwargs)

    return wrapper


@req_admin
def get_data(role):
    print(f"Welcome {role}!")
    print("Here is your data!")


get_data("user")
get_data("admin")
