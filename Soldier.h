#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>

class Soldier {
private:
    std::string fullName;
    std::string rank;
    int morale;
    int wins;
    int losses;
    std::string status;
    int id;

public:
    Soldier(std::string fullName, std::string rank, int id);
    ~Soldier() = default;

    std::string getFullName() const;
    std::string getRank() const;
    int getMorale() const;
    void promote();
    void demote();
    int getWins() const;
    void recordWin(std::string newStatus);
    int getLosses() const;
    void recordLoss(std::string newStatus);
    std::string getStatus() const;
    int getId() const;
    void heal();
};

#endif // SOLDIER_H
