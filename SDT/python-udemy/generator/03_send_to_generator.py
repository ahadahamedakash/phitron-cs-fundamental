def greet():
    print("Welcome!")

    order = yield
    while True:
        print(f"Preparing #{order}")
        order = yield


stall = greet()
next(stall)

stall.send("Coffee")
