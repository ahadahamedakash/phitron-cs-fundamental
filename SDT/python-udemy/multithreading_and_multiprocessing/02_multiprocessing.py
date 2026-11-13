from multiprocessing import Process
import time


def brew_coffee(name):
    print(f"Brewing {name}!")
    time.sleep(3)
    print(f"{name} is served!")


if __name__ == "__main__":
    coffee_makers = [
        Process(target=brew_coffee, args=(f"Brewed #{i+1}",)) for i in range(3)
    ]

    # start all process
    for c in coffee_makers:
        c.start()

    # wait for all to complete
    for c in coffee_makers:
        c.join()

    print(f"All coffee served!")
