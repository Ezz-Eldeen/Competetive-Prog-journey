#include <iostream>
#include <sstream>

int main() {
    std::stringstream ss("10 20 30");
    int value;

    while (ss >> value) {
        std::cout << "Read: " << value << std::endl;
    }

    std::cout << "String stream state after extraction: " << ss.str() << std::endl;
    return 0;
}