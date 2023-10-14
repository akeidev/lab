#include <iostream>
#include <vector>
#include <map>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    std::vector<std::vector<int>> matrix = {
        {5, 20, 30},
        {15, 50, 5},
        {20, 5, 7}
    };

    std::map<int, int> elementCount;

    for (const auto& row : matrix) {
        for (int element : row) {
            ++elementCount[element];
        }
    }

    std::cout << "Результат:\n";
    for (const auto& pair : elementCount) {
        if (pair.second > 1) {
            std::cout << pair.first << " - " << pair.second << "\n";
        }
    }

    return 0;
}
