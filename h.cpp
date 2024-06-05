#include <iostream>
#include <vector>
#include <string>
#include <cctype>

bool isVowel(char c) {
    char lower = std::tolower(c);
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main() {
    int M;
    std::cout << "Enter the number of strings: ";
    std::cin >> M;
    std::cin.ignore(); ]

    std::vector<std::string> strings(M);
    std::cout << "Enter " << M << " strings:" << std::endl;
    for(int i = 0; i < M; ++i) {
        std::getline(std::cin, strings[i]);
    }

    std::vector<int> vowelCounts(M);
    for(int i = 0; i < M; ++i) {
        int count = 0;
        for(char c : strings[i]) {
            if(isVowel(c)) {
                ++count;
            }
        }
        vowelCounts[i] = count;
    }

    std::cout << "Number of vowels in each string:" << std::endl;
    for(int i = 0; i < M; ++i) {
        std::cout << "String " << i + 1 << ": " << vowelCounts[i] << " vowels" << std::endl;
    }

    return 0;
}
