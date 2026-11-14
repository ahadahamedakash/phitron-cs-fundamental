import threading
import time


def brew_coffee():
    print(f"{threading.current_thread().name} started brewing...")

    cnt = 0
    for _ in range(100_000_000):
        cnt += 1

    print(f"{threading.current_thread().name} fnished brewing!")


t1 = threading.Thread(target=brew_coffee, name="Cold Coffee")
t2 = threading.Thread(target=brew_coffee, name="Hot Coffee")

start = time.time()

t1.start()
t2.start()

t1.join()
t2.join()

end = time.time()

print(f"Total time taken: {end - start:.2f} seconds")
