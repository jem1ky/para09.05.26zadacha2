#include "Product.h"
#include <iostream>

// Метод для вывода информации о товаре
void Product::print() {
    std::cout << "Товар: " << name << std::endl;
    std::cout << "Количество на складе: " << quantity << " шт." << std::endl;
    std::cout << "Цена за единицу: " << price << " руб." << std::endl;
}

// Метод для расчета общей стоимости товара на складе
double Product::getTotalCost() {
    return quantity * price;
}
