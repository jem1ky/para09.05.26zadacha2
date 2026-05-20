#include "string_search.h"
#include <iostream>
#include <string>

void runStringSearchDemo() {
    // 1. Создаем исходную строку для демонстрации поиска
    std::string text = "C++ — мощный язык программирования. Класс string очень удобен.";

    // 2. Ищем позицию первого вхождения ключевого слова "string"
    // Метод .find() возвращает индекс первого символа совпадения (тип size_t)
    size_t position = text.find("string");

    // 3. Проверяем результат поиска
    // Если подстрока не найдена, .find() возвращает константу std::string::npos
    if (position != std::string::npos) {
        // 4. Если совпадение успешно найдено, выводим его индекс в консоль
        std::cout << "Слово 'string' найдено на позиции " << position << std::endl;
    }
    else {
        // 5. Обрабатываем случай, когда искомое слово отсутствует в тексте
        std::cout << "Слово не найдено" << std::endl;
    }
}
