from multiprocessing import Process
import time


def cnt_num():
    print(f"Started count process...")
    cnt = 0
    for _ in range(100_000_000):
        cnt += 1

    print(f"End counting!")


if __name__ == "__main__":

    start = time.time()

    c1 = Process(target=cnt_num)
    c2 = Process(target=cnt_num)

    c1.start()
    c2.start()

    c1.join()
    c2.join()

    end = time.time()

    print(f"Total time: {end - start:.2f} seconds")
