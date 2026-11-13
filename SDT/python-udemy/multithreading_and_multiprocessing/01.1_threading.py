import threading


def show_thread():
    current = threading.current_thread()

    print("Current Thread:", current.name)
    print("Is Main Thread:", current is threading.main_thread())


print("Main Thread:", threading.current_thread().name)

t1 = threading.Thread(target=show_thread, name="Order Thread")
t2 = threading.Thread(target=show_thread, name="Brew Thread")

t1.start()
t2.start()

t1.join()
t2.join()
