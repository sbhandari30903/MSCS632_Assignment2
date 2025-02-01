#include <iostream>
#include <cstring>

void printString(const char* s) {
    std::cout << s << std::endl;
}

int main() {
    char* s = new char[16]; // manually allocated memory
    strcpy(s, "allocate memory");
    printString(s);
    delete[] s; // manual deallocation
    return 0;
}