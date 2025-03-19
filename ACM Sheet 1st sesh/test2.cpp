#include <iostream>
#include <vector>
#include <sstream>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // Consume the newline character left in the buffer.

    std::string line;
    std::getline(std::cin, line); // Read the entire line of space-separated values.

    std::stringstream ss(line);
    std::vector<int> values;
    int value;

    while (ss >> value) {
        values.push_back(value);
    }

    // Now 'values' vector contains the n space-separated integers.

    // Example: Print the values
    for (int val : values) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}