#include <iostream>
#include "Apartment.h"

int main() {
    Apartment apartment;

    Room livingRoom("Living Room");
    livingRoom.addLock(Lock("LivingRoomLock1"));
    livingRoom.addLock(Lock("LivingRoomLock2"));

    Room bedroom("Bedroom");
    bedroom.addLock(Lock("BedroomLock1"));

    apartment.addRoom(livingRoom);
    apartment.addRoom(bedroom);

    livingRoom.enter();
    livingRoom.exit();
    bedroom.enter();

    apartment.generateStatistics();

    apartment.lockAll();
    apartment.unlockAll();

    return 0;
}
