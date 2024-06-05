#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int N;
    std::cout << "Enter the number of elements: ";
    std::cin >> N;

    std::vector<int> array(N);
    std::cout << "Enter " << N << " numeric values:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];
    }

    int countDivisibleBy3 = 0;
    for (int num : array) {
        if (num % 3 == 0) {
            ++countDivisibleBy3;
        }
    }

    int sumEvenValues = 0;
    int countEvenValues = 0;
    for (int num : array) {
        if (num % 2 == 0) {
            sumEvenValues += num;
            ++countEvenValues;
        }
    }

    double meanEvenValues = countEvenValues > 0 ? static_cast<double>(sumEvenValues) / countEvenValues : 0;

    std::vector<double> newArray(N + 2);
    newArray[0] = static_cast<double>(countDivisibleBy3);
    for (int i = 0; i < N; ++i) {
        newArray[i + 1] = array[i];
    }
    newArray[N + 1] = meanEvenValues;

    std::cout << "New array with additional elements:" << std::endl;
    for (double value : newArray) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
