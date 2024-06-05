#include <iostream>
#include <vector>
#include <string>


int countSyllableOccurrences(const std::string& word, const std::string& syllable) {
    int count = 0;
    size_t pos = 0;

    while ((pos = word.find(syllable, pos)) != std::string::npos) {
        ++count;
        pos += syllable.length(); 
    }

    return count;
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

    std::cout << "Enter the syllable to count: ";
    std::getline(std::cin, syllable);


    std::cout << "Syllable occurrences in each word:\n";
    for (const std::string& word : words) {
        int count = countSyllableOccurrences(word, syllable);
        std::cout << word << ": " << count << std::endl;
    }

    return 0;
}
