#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int M;
    std::cout << "Enter the number of strings: ";
    std::cin >> M;
    std::cin.ignore();  

    std::vector<std::string> strings(M);
    std::cout << "Enter " << M << " strings:" << std::endl;
    for(int i = 0; i < M; ++i) {
        std::getline(std::cin, strings[i]);
    }

    size_t maxLength = 0;
    for(const auto& str : strings) {
        maxLength = std::max(maxLength, str.length());
    }

    std::cout << "Aligned strings:" << std::endl;
    for(const auto& str : strings) {
        size_t numAsterisks = maxLength - str.length();
        std::string alignedString(numAsterisks, '*');
        alignedString += str;
        std::cout << alignedString << std::endl;
    }

    return 0;
}
