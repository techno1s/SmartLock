#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "Lock.h"

class Room {
public:
    Room(const std::string& name);
    void addLock(const Lock& lock);
    void enter();
    void exit();
    int getEntryCount() const;
    int getExitCount() const;
    std::string getName() const;

private:
    std::string name;
    std::vector<Lock> locks;
    int entryCount;
    int exitCount;
};

#endif // ROOM_H
