#ifndef APARTMENT_H
#define APARTMENT_H

#include <vector>
#include "Room.h"

class Apartment {
public:
    void addRoom(const Room& room);
    void lockAll();
    void unlockAll();
    void generateStatistics() const;

private:
    std::vector<Room> rooms;
};

#endif // APARTMENT_H
