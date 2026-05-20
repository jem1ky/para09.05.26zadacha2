#include <iostream>
#include <cstring> // Для работы с функцией strcpy / strncpy
#include "Product.h"

int main() {
    // Установка кодировки для корректного вывода кириллицы в консоли Windows
    std::setlocale(LC_ALL, "Russian");

    // Создание объекта класса Product
    Product myProduct;

    // Присвоение значений полям (копируем строку в массив char)
#if defined(_MSC_VER)
    strcpy_s(myProduct.name, "Монитор"); // Безопасная версия для Visual Studio
#else
    std::strncpy(myProduct.name, "Монитор", sizeof(myProduct.name) - 1);
    myProduct.name[sizeof(myProduct.name) - 1] = '\0'; // Гарантируем нуль-терминатор
#endif

    myProduct.quantity = 15;
    myProduct.price = 15000.0;

    // Вызов методов для проверки работы программы
    myProduct.print();

    std::cout << "Общая стоимость всех единиц товара: "
        << myProduct.getTotalCost() << " руб." << std::endl;

    return 0;
}
