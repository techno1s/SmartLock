#include "Apartment.h"
#include <iostream>

void Apartment::addRoom(const Room& room) {
    rooms.push_back(room);
}

void Apartment::lockAll() {
    for (auto& room : rooms) {
        for (auto& lock : room.getLocks()) {
            lock.lock();
        }
    }
}

void Apartment::unlockAll() {
    for (auto& room : rooms) {
        for (auto& lock : room.getLocks()) {
            lock.unlock();
        }
    }
}

void Apartment::generateStatistics() const {
    for (const auto& room : rooms) {
        std::cout << "Room: " << room.getName() << std::endl;
        std::cout << "Entries: " << room.getEntryCount() << std::endl;
        std::cout << "Exits: " << room.getExitCount() << std::endl;
    }
}
