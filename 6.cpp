#include <iostream>
#include <locale.h>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");

    int n, m;
    std::cout << "Введите количество столбцов: \n";
    std::cin >> m;
    std::cout << "Введите количество строк: \n";
    std::cin >> n;
    std::vector<std::vector<int>> v(n, std::vector<int>(m));
    std::cout << "Введите данные массива: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> v[i][j];
        }
    }

    std::cout << "Исходный массив: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << v[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Результат функции MaxMin(): \n";
    for (int i = 0; i < n; ++i) {
        int Max = v[i][0];
        int Min = v[i][0];
        for (int j = 0; j < m; ++j) {
            Max = std::max(Max, v[i][j]);
            Min = std::min(Min, v[i][j]);
        }

        for (int j = 0; j < m; ++j) {
            if (Max == v[i][j]) {
                std::cout << i << " " << j << " " << Max << "\n";
            }

            if (Min == v[i][j]) {
                std::cout << i << " " << j << " " << Min << "\n";
            }
        }
    }

    return 0;
}
