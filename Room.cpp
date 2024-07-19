#include "Room.h"

Room::Room(const std::string& name) : name(name), entryCount(0), exitCount(0) {}

void Room::addLock(const Lock& lock) {
    locks.push_back(lock);
}

void Room::enter() {
    entryCount++;
}

void Room::exit() {
    exitCount++;
}

int Room::getEntryCount() const {
    return entryCount;
}

int Room::getExitCount() const {
    return exitCount;
}

std::string Room::getName() const {
    return name;
}
