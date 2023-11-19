#include <iostream>
#include <climits> // برای استفاده از INT_MIN

int main() {
    const int size = 100;
    double numbers[size];

    for (int i = 0; i < size; ++i) {
        std::cout << "عدد " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    double max_number = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }

    std::cout << "بزرگترین عدد: " << max_number << std::endl;

    return 0;
}