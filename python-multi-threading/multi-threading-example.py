import threading

def print_every_number(max_number, caller_id):
    for i in range(1, max_number + 1):
        print("Caller {}: {}".format(caller_id, i))

if __name__ == '__main__':
    thread_1 = threading.Thread(target=print_every_number, args=(100, 1))
    thread_2 = threading.Thread(target=print_every_number, args=(100, 2))

    thread_1.start()
    thread_2.start()

    thread_1.join()
    thread_2.join()