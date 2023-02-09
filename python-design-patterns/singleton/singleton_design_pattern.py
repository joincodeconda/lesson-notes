from threading import Lock, Thread

class SingletonMeta(type):
    instances = {}

    lock = Lock()

    def __call__(cls, *args, **kwargs):
        with cls.lock:
            if cls not in cls.instances:
                cls.instances[cls] = super().__call__(*args, **kwargs)
        return cls.instances[cls]

class Singleton(metaclass=SingletonMeta):
    status = None

    def __init__(self, status):
        self.status = status

def test_singleton(status):
    singleton = Singleton(status)
    print("Singleton status: {}".format(singleton.status))

if __name__ == '__main__':
    thread_1 = Thread(target=test_singleton, args=("Thread 1",))
    thread_2 = Thread(target=test_singleton, args=("Thread 2",))

    thread_1.start()
    thread_2.start()

    thread_1.join()
    thread_2.join()