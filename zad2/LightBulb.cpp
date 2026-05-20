#include "LightBulb.h"

// Включает лампочку
void LightBulb::turnOn() {
    isOn = true;
}

// Выключает лампочку
void LightBulb::turnOff() {
    isOn = false;
}

// Переключает состояние на противоположное
void LightBulb::toggle() {
    isOn = !isOn;
}

// Возвращает строковое представление текущего состояния
const char* LightBulb::getState() {
    return isOn ? "ON" : "OFF";
}
