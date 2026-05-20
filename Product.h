#ifndef PRODUCT_H
#define PRODUCT_H

class Product {
public:
    // Публичные поля по условию задачи
    char name[50];
    int quantity;
    double price;

    // Прототипы методов
    void print();
    double getTotalCost();
};

#endif // PRODUCT_H
