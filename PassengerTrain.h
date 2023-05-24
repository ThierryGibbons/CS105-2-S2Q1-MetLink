/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#ifndef PASSENGERTRAIN_H
#define PASSENGERTRAIN_H

#include "Trip.h"

class PassengerTrain : public Trip {
public:
    void setDepatureTime(int DepatureTime);
    void setCycleAllowed(bool CycleAllowed);
    void setCalegory(bool Calegory);
    int getDepatureTime() const;
    bool getCycleAllowed() const;
    bool getCalegory() const;

protected:
    int DepatureTime;
    bool CycleAllowed;
    bool Calegory;
};

#endif