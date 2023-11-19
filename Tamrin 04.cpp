#include <iostream>

int main() {
    const int size = 100;
    int numbers[size];

    std::cout << "Enter 100 integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
    
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    std::cout << "\nSorted numbers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }

}
   
