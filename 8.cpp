#include <iostream>
#include <locale.h>

int& R(int& a, int& b, int& c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int num1, num2, num3;

    std::cout << "Введите три числа: ";
    std::cin >> num1 >> num2 >> num3;

    int& maxRef = R(num1, num2, num3);

    int average = (num1 + num2 + num3) / 3;

    maxRef = average;

    std::cout << "Измененные числа: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    return 0;
}
