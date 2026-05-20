#include <iostream>
#include "LightBulb.h"

int main() {
    // Создаем объект лампочки
    LightBulb bulb;

    // Начальное состояние (должно быть OFF)
    std::cout << "Начальное состояние: " << bulb.getState() << std::endl;

    // 1. Включаем лампочку
    bulb.turnOn();
    std::cout << "После turnOn(): " << bulb.getState() << std::endl;

    // 2. Переключаем состояние (должна выключиться)
    bulb.toggle();
    std::cout << "После первого toggle(): " << bulb.getState() << std::endl;

    // 3. Переключаем состояние еще раз (должна включиться)
    bulb.toggle();
    std::cout << "После второго toggle(): " << bulb.getState() << std::endl;

    // 4. Выключаем лампочку
    bulb.turnOff();
    std::cout << "После turnOff(): " << bulb.getState() << std::endl;

    return 0;
}
