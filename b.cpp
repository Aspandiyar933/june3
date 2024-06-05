#include<iostream>

int main() {
    int a = 1; 
    int b = 0; 
    int countIterator = 0;
    int num;
    bool run; run = true;
    while (run)
    {
        std::cin >> num;
        countIterator++;
        if (num == 55555) {
            run = false;
        } else {
            if (countIterator % 2 == 0) {
                a = a * num;
                num = 0;
            }
            if (countIterator % 2 != 0) {
                b = b + num;
                num = 0;
            }
        }
        std::cout << a << std::endl << b << std::endl;
    }
}