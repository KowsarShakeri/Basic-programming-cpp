#include <iostream>
#include <cmath>

bool isDeficient(int number) {
    int sum = 1;
    int sqrtNum = sqrt(number);

    for (int i = 2; i <= sqrtNum; ++i) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) {
                sum += number / i;
            }
        }
    }

    return sum < (2 * number);
}

int main() {
    int a, b;

    std::cout << "Enter the range (a and b): ";
    std::cin >> a >> b;

    std::cout << "Deficient numbers between " << a << " and " << b << " are: ";

    for (int i = a; i <= b; ++i) {
        if (isDeficient(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
