#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age < 0) {
        std::cout << "Invalid age entered." << std::endl;
        return -1;
    }

    std::cout << "Your age is: " << age << std::endl;
    return 0;
}
