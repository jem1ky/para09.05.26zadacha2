#ifndef LIGHTBULB_H
#define LIGHTBULB_H

class LightBulb {
private:
    // Скрытое состояние лампочки (вкл./выкл.)
    bool isOn = false; // По умолчанию лампочка выключена

public:
    // Методы-модификаторы (мутаторы)
    void turnOn();
    void turnOff();
    void toggle();

    // Метод-инспектор (аксессор)
    const char* getState();
};

#endif // LIGHTBULB_H
