#!/usr/bin/env python3

class Dog:
    num_owners = 0 # class attribute

    def __init__(self, name):
        self.name = name # instance attribute
        Dog.num_owners += 1

    def bark(): # class method
        print("Woof!")

    def print_name(self): # instance method
        print(self.name)

class Terrier(Dog):
    def __init__(self, name, does_shed):
        super().__init__(name)
        self.does_shed = does_shed
        Terrier.num_owners += 1

    def is_hypoallergenic(self):
        if not self.does_shed:
            print("This dog is hypoallergenic!")
        else:
            print("This dog is not hypoallergenic.")

def main():
    print("Hello world!")

    dog1 = Dog("Sam")

    print("Dog name: {}".format(dog1.name))
    print("Number of owners (instance): {}".format(dog1.num_owners))

    dog2 = Dog("Buddy")

    print("Dog name: {}".format(dog2.name))
    print("Number of owners (instance): {}".format(dog2.num_owners))

    print("Number of owners (class): {}".format(Dog.num_owners))

    Dog.bark() # called using class name, not instance name

    dog2.print_name() # called using instance name, not class name

    dog3 = Terrier("Red", False)

    print("Dog name: {}".format(dog3.name))
    dog3.is_hypoallergenic()

if __name__ == "__main__":
    main()