/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#ifndef PASSENGERTRAIN_H
#define PASSENGERTRAIN_H

#include "Trip.h"
#include <iostream>

class PassengerTrain : public Trip {
public:
//Setters
    void setDepatureTime(int DepatureTime);
    void setCycleAllowed(bool CycleAllowed);
    void setCategory(bool Category);
    void setTrainStatus(bool TrainStatus);
//Getters
    int getDepatureTime() const;
    bool getCycleAllowed() const;
    bool getCategory() const;
    bool getTrainStatus() const;

    void printPassengerTrains(const PassengerTrain& passengerTrain);

protected:
    int DepatureTime;
    bool CycleAllowed;
    bool Category;
    bool TrainStatus;
};

#endif