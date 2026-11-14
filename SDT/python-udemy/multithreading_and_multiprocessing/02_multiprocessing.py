from multiprocessing import Process
import time

# def brew_coffee(name):
#     print(f"Brewing {name}!")
#     time.sleep(3)
#     print(f"{name} is served!")


def brew_coffee(name):
    start = time.time()
    print(f"{name} started: {start:.2f}", flush=True)

    time.sleep(3)

    end = time.time()
    print(f"{name} finished: {end:.2f}", flush=True)


if __name__ == "__main__":
    start = time.time()

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
    print(f"Total time: {time.time() - start:.2f} seconds")


# from multiprocessing import Process
# import time


# def brew_coffee(name):
#     start = time.time()

#     print(f"{name} started at {start:.2f}")

#     time.sleep(3)

#     end = time.time()
#     print(f"{name} finished at {end:.2f}")


# if __name__ == "__main__":
#     start = time.time()

#     coffee_makers = [
#         Process(target=brew_coffee, args=(f"Coffee #{i+1}",)) for i in range(3)
#     ]

#     for c in coffee_makers:
#         c.start()

#     for c in coffee_makers:
#         c.join()

#     print(f"Total time: {time.time() - start:.2f} seconds")
