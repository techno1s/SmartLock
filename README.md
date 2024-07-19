# SmartLock
Smart lock door management

This project implements a smart electronic lock system for an apartment using C++. The software tracks the entries and exits of various rooms, generates usage statistics, and includes maintenance and emergency functions to lock/unlock the doors.

## Project Structure

The project is divided into the following files:

- `Lock.h` and `Lock.cpp`: Define the `Lock` class representing an electronic lock.
- `Room.h` and `Room.cpp`: Define the `Room` class representing a room in the apartment, tracking locks and usage statistics.
- `Apartment.h` and `Apartment.cpp`: Define the `Apartment` class managing the entire apartment, including functions to lock/unlock all locks and generate statistics.
- `main.cpp`: Contains the entry point of the program and demonstrates the use of the `Lock`, `Room`, and `Apartment` classes.

## How to Compile

To compile the project, you can use a C++ compiler like `g++`. Run the following command in the project directory:

```bash
g++ -o SmartLockSystem main.cpp Lock.cpp Room.cpp Apartment.cpp

## How to Run
After compiling the project, you can run the program with the following command:

./SmartLockSystem

## Features

Lock Connection: Each room can have one or more electronic locks.
Entry/Exit Tracking: The system tracks the number of entries and exits for each room.
Lock/Unlock Functions: Functions to lock and unlock all locks in the apartment.
Statistics Generation: The system generates usage statistics for each room.
Usage Example
In the main.cpp file, an example usage of the system is created:

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
```

## Maintenance and Emergency
The system includes maintenance and emergency functions to lock and unlock all locks in the apartment, ensuring security and efficient management of the locks.

## Contributions
If you wish to contribute to this project, feel free to fork the repository and submit a pull request with your changes.
