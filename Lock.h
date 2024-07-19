#ifndef LOCK_H
#define LOCK_H

#include <string>

class Lock {
public:
    Lock(const std::string& id);
    void lock();
    void unlock();
    bool isLocked() const;
    std::string getId() const;

private:
    std::string id;
    bool locked;
};

#endif // LOCK_H
