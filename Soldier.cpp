#include "Soldier.h"
#include <stdexcept>

Soldier::Soldier(std::string fullName, std::string rank, int id)
    : fullName(fullName), rank(rank), morale(100), wins(0), losses(0), status("в строю"), id(id) {
    if (id < 0) throw std::invalid_argument("ID не может быть отрицательным");
}

std::string Soldier::getFullName() const {
    return fullName;
}

std::string Soldier::getRank() const {
    return rank;
}

int Soldier::getMorale() const {
    return morale;
}

void Soldier::promote() {
    // Логика повышения звания
}

void Soldier::demote() {
    // Логика понижения звания
}

int Soldier::getWins() const {
    return wins;
}

void Soldier::recordWin(std::string newStatus) {
    if (status == "ранен" || status == "убит") return;
    wins++;
    morale += 10;
    status = newStatus;
}

int Soldier::getLosses() const {
    return losses;
}

void Soldier::recordLoss(std::string newStatus) {
    if (status == "ранен" || status == "убит") return;
    losses++;
    morale -= 10;
    status = newStatus;
}

std::string Soldier::getStatus() const {
    return status;
}

int Soldier::getId() const {
    return id;
}

void Soldier::heal() {
    if (status == "ранен") {
        status = "в строю";
        morale += 20; // Восстановление морального духа
    }
}
