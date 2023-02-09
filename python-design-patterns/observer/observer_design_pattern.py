class Publisher:

    def register(self, subscriber):
        pass

    def unregister(self, subscriber):
        pass

    def notify(self):
        pass

class SecurityCamera(Publisher):

    intruder_in_view = None

    observers = []

    def register(self, subscriber):
        self.observers.append(subscriber)

    def unregister(self, subscriber):
        return self.observers.remove(subscriber)

    def notify(self):
        for observer in self.observers:
            observer.update(self)

    def set_intruder_in_view(self, intruder_in_view):
        if self.intruder_in_view == intruder_in_view:
            return
        self.intruder_in_view = intruder_in_view
        self.notify()

class Subscriber:

    def update(self, publisher):
        pass

class HomeAlarm(Subscriber):

    def startAlarm(self):
        print("ALARM STARTED!")

    def stopAlarm(self):
        print("Alarm has stopped.")

    def update(self, publisher):
        if publisher.intruder_in_view:
            self.startAlarm()
        else:
            self.stopAlarm()

if __name__ == '__main__':
    security_camera = SecurityCamera()

    home_alarm_1 = HomeAlarm()
    home_alarm_2 = HomeAlarm()
    home_alarm_3 = HomeAlarm()

    security_camera.register(home_alarm_1)
    security_camera.register(home_alarm_2)
    security_camera.register(home_alarm_3)

    security_camera.set_intruder_in_view(True)
    security_camera.set_intruder_in_view(False)

    security_camera.unregister(home_alarm_2)

    security_camera.set_intruder_in_view(True)
    security_camera.set_intruder_in_view(True)

    security_camera.set_intruder_in_view(False)
    security_camera.set_intruder_in_view(False)