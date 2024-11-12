#include <iostream>
#include <locale>
#include "Soldier.h"

int main() {
    std::setlocale(LC_ALL, "RU");
    try {
        Soldier soldier("Иванов Иван", "Рядовой", 1);
        std::cout << "ФИО: " << soldier.getFullName() << std::endl;
        std::cout << "Звание: " << soldier.getRank() << std::endl;
        std::cout << "Моральный дух: " << soldier.getMorale() << std::endl;

        soldier.recordWin("в строю");
        std::cout << "Выигранные бои: " << soldier.getWins() << ", Моральный дух: " << soldier.getMorale() << std::endl;

        soldier.recordLoss("в строю");
        std::cout << "Проигранные бои: " << soldier.getLosses() << ", Моральный дух: " << soldier.getMorale() << std::endl;

        soldier.heal();
        std::cout << "Состояние после лечения: " << soldier.getStatus() << std::endl;

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
