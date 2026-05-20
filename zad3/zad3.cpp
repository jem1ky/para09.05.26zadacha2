#include <iostream>
#include "string_search.h"

int main() {
    // Настройка локализации для корректного вывода кириллицы
    std::setlocale(LC_ALL, "Russian");

    std::cout << "=== Тестирование задачи поиска подстроки ===" << std::endl;
    runStringSearchDemo();

    return 0;
}
