#include <iostream>
#include <string>

void swap(std::string& str) {
    for (char& c : str) {
        if (c == '?') {
            c = '*';
        }
    }
}

int main() {
    std::string m;
    std::getline(std::cin, m);

    swap(m);
    std::cout << m << std::endl;

    return 0;
}
