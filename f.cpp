#include <iostream>
#include <string>


std::string removeSyllable(const std::string& word, const std::string& syllable) {
    std::string result = word;
    size_t pos;

    
    while ((pos = result.find(syllable)) != std::string::npos) {
        result.erase(pos, syllable.length());
    }

    return result;
}

int main() {
    int M;
    std::string syllable;
    std::vector<std::string> words;

    std::cout << "Enter the number of words: ";
    std::cin >> M;
    std::cin.ignore();

    std::cout << "Enter the words:\n";
    words.resize(M);
    for (int i = 0; i < M; ++i) {
        std::getline(std::cin, words[i]);
    }

    std::cout << "Enter the syllable to remove: ";
    std::getline(std::cin, syllable);

    for (std::string& word : words) {
        word = removeSyllable(word, syllable);
    }

    // Output the modified words
    std::cout << "Modified words:\n";
    for (const std::string& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}
