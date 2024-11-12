#include <iostream>
#include <locale>
#include "Soldier.h"

int main() {
    std::setlocale(LC_ALL, "RU");
    try {
        Soldier soldier("������ ����", "�������", 1);
        std::cout << "���: " << soldier.getFullName() << std::endl;
        std::cout << "������: " << soldier.getRank() << std::endl;
        std::cout << "��������� ���: " << soldier.getMorale() << std::endl;

        soldier.recordWin("� �����");
        std::cout << "���������� ���: " << soldier.getWins() << ", ��������� ���: " << soldier.getMorale() << std::endl;

        soldier.recordLoss("� �����");
        std::cout << "����������� ���: " << soldier.getLosses() << ", ��������� ���: " << soldier.getMorale() << std::endl;

        soldier.heal();
        std::cout << "��������� ����� �������: " << soldier.getStatus() << std::endl;

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "������: " << e.what() << std::endl;
    }

    return 0;
}
