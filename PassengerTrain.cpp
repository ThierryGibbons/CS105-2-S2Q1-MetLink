/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "PassengerTrain.h"

//Setters
void PassengerTrain::setDepatureTime(int DepatureTime) {
    this->DepatureTime = DepatureTime;
}

void PassengerTrain::setCycleAllowed(bool CycleAllowed) {
    this->CycleAllowed = CycleAllowed;
}

void PassengerTrain::setCategory(bool Category) {
    this->Category = Category;
}

void PassengerTrain::setTrainStatus(bool TrainStatus) {
    this->TrainStatus = TrainStatus;
}

//Getters
int PassengerTrain::getDepatureTime() const {
    return DepatureTime;
}

bool PassengerTrain::getCycleAllowed() const {
    return CycleAllowed;
}

bool PassengerTrain::getCategory() const {
    return Category;
}

bool PassengerTrain::getTrainStatus() const {
    return TrainStatus;
}

void PassengerTrain::printPassengerTrains(const PassengerTrain& passengerTrain) {
    std::cout << "Train Number: " << passengerTrain.getTrainNum();
    std::cout << "     Platform Number: " << passengerTrain.getPlatformNum() << std::endl;
    std::cout << passengerTrain.getStartPlace() << " -> " << passengerTrain.getEndPlace() << std::endl;
    std::cout << "Start Time: " << passengerTrain.getStartTime();
    (passengerTrain.getCycleAllowed) ? std::cout << "     Cycle Allowed" : std::cout << "     Cycle Not Allowed";
    // std::cout << (passengerTrain.getCategory) ? "Express" : "All Stops";

    std::cout << "     Category: " << passengerTrain.getCategory() << std::endl;
    std::cout << "Train Status: " << passengerTrain.getTrainStatus() << std::endl;
}