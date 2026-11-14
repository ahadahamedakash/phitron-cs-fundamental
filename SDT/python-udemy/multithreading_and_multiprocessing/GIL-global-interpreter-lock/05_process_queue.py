from multiprocessing import Process, Queue


def prepare(queue):
    queue.put("Coffee is ready!")


if __name__ == "__main__":
    qu = Queue()

    pr = Process(target=prepare, args=(qu,))

    pr.start()
    pr.join()

    print(qu.get())
