#include <iostream>
#include <vector>
#include <string>

int main() {
    int M;
    std::cout << "Enter the number of words: ";
    std::cin >> M;
    std::cin.ignore();  

    std::vector<std::string> words(M);
    std::cout << "Enter " << M << " words:" << std::endl;
    for(int i = 0; i < M; ++i) {
        std::cin >> words[i];
    }

    std::string longString;
    for(int i = 0; i < M; ++i) {
        longString += words[i];
        if (i < M - 1) {
            longString += " ";
        }
    }

    std::cout << "The composed long string is: " << longString << std::endl;

    return 0;
}
