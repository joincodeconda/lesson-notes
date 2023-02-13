import UIKit

// -- Create a new private dispatch queue --
// All private dispatch queues are serial by default.
// This means all tasks will always be completed in order (sync and async have the same outcome).
let serialQueue = DispatchQueue(label: "com.codeconda.serialqueue")

serialQueue.async {
    for i: Int in 1...100 {
        print("Serial Queue, Thread 1: \(i)")
    }
}

serialQueue.async {
    for i: Int in 1...100 {
        print("Serial Queue, Thread 2: \(i)")
    }
}

// -- Create a new private dispatch queue with the concurrent attribute --
// The concurrent attribute allows tasks to be completed simultaneously (using the async call).
let concurrentQueue = DispatchQueue(label: "com.codeconda.concurrentqueue",
                                    attributes: .concurrent)

concurrentQueue.async {
    for i: Int in 1...100 {
        print("Concurrent Queue, Thread 1: \(i)")
    }
}

concurrentQueue.async {
    for i: Int in 1...100 {
        print("Concurrent Queue, Thread 2: \(i)")
    }
}

// -- Dispatch tasks on the main queue --
// The main queue has the highest priority and is usually used for UI tasks.
// The main queue is always serial (sync and async have the same outcome).
DispatchQueue.main.async {
    for i: Int in 1...100 {
        print("Main Queue, Thread 1: \(i)")
    }
}

DispatchQueue.main.async {
    for i: Int in 1...100 {
        print("Main Queue, Thread 2: \(i)")
    }
}

// -- Dispatch tasks on the global queue --
// The global queue is usually used for background tasks.
// The priority can be further specified by setting the qos (quality-of-service).
// Global queues are concurrent by default.
DispatchQueue.global(qos: .background).async {
    for i: Int in 1...100 {
        print("Global Background Queue, Thread 1: \(i)")
    }
}

DispatchQueue.global(qos: .background).async {
    for i: Int in 1...100 {
        print("Global Background Queue, Thread 2: \(i)")
    }
}
