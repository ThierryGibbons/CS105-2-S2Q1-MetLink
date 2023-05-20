/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "PassengerTrain.h"

void PassengerTrain::setDepatureTime(int DepatureTime) {
    this->DepatureTime = DepatureTime;
}

void PassengerTrain::setCycleAllowed(bool CycleAllowed) {
    this->CycleAllowed = CycleAllowed;
}

void PassengerTrain::setCalegory(bool Calegory) {
    this->Calegory = Calegory;
}

int PassengerTrain::getDepatureTime() const {
    return DepatureTime;
}

bool PassengerTrain::getCycleAllowed() const {
    return CycleAllowed;
}

bool PassengerTrain::getCalegory() const {
    return Calegory;
}
