#include <iostream>
#include <thread>
#include <vector>

int sharedCounter = 0;  // Shared resource

// Function that increments the shared counter
void incrementCounter() {
    for (int i = 0; i < 1000; ++i) {
        sharedCounter++;  // Not thread-safe, race condition here
    }
}

int main() {
    // Create multiple threads that access the shared resource
    std::vector<std::thread> threads;

    // Start 10 threads
    for (int i = 0; i < 10; ++i) {
        threads.push_back(std::thread(incrementCounter));
    }

    // Join all threads
    for (auto& th : threads) {
        th.join();
    }

    // Print the final value of sharedCounter
    std::cout << "Final value of sharedCounter: " << sharedCounter << std::endl;

    return 0;
}
