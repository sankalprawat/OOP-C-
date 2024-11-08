#include <iostream>

int count = 0;

void print() {
    count++;
    std::cout << count << std::endl;
    print();
}

int main() {
    try {
        print();
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Stack overflow after " << count << " calls." << std::endl;
    }
    return 0;
}
