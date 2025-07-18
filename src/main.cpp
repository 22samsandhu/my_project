#include <iostream>
extern "C" void print_message();

int main() {
    std::cout << "Calling C DLL from C++ UI...\n";
    print_message();
    return 0;
}