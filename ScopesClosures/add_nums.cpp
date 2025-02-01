#include <iostream>
#include <functional>

std::function<void(int)> outerFunction(int x) {
    std::string message = "Outer Funnction! x = " + std::to_string(x);
    std::cout << message << std::endl;
    return [message, x](int y) { // lambda can access 'message' and 'x' by value
        std::cout << message << std::endl;
        std::cout << "Sum of x and y: " << (x + y) << std::endl;
    };
}

int main() {
    auto closure = outerFunction(5);
    closure(10);
    return 0;
}