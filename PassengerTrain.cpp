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
    // TRACKLINE
    std::cout << "*****" << passengerTrain.getLine() << " Line Train information*****\n";
    std::cout << "Train Number: " << passengerTrain.getTrainNum();
    std::cout << "     Platform Number: " << passengerTrain.getPlatformNum() << "\n";
    std::cout << passengerTrain.getStartPlace() << " -> " << passengerTrain.getEndPlace() << "\n";
    std::cout << "Start Time: " << passengerTrain.getStartTime();
    (passengerTrain.getCycleAllowed()) ? std::cout << "     Cycle Allowed\n" : std::cout << "     Cycle Not Allowed\n";
    (passengerTrain.getCategory()) ? std::cout << "Express" : std::cout << "All Stops";
    (passengerTrain.getTrainStatus()) ? std::cout << "     Departed\n" : std::cout << "     Boarding\n";
}