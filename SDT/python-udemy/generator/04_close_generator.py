def local_coffee():
    yield "Cold Coffee"
    yield "Cappuccino"


def imported():
    yield "Expresso"


def full_menu():
    yield from local_coffee()
    yield from imported()


for item in full_menu():
    print(item)


def stall():
    try:
        while True:
            order = yield "Waiting!"

    except:
        print("Closed")


st = stall()

print(next(st))
st.close()  # cleanup
