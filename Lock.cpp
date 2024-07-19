#include "Lock.h"

Lock::Lock(const std::string& id) : id(id), locked(true) {}

void Lock::lock() {
    locked = true;
}

void Lock::unlock() {
    locked = false;
}

bool Lock::isLocked() const {
    return locked;
}

std::string Lock::getId() const {
    return id;
}
