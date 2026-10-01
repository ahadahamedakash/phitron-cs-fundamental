# scope
balance = 5000


def calculate(price):
    global balance
    balance -= price
    print("Current balance: ", balance)


calculate(500)
