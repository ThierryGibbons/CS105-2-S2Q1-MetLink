/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "Train.h"

void Train::setTrainNum(int trainNum) {
    this->trainNum = trainNum;
}

void Train::setTrainType(TrainType trainType) {
    this->trainType = trainType;
}

int Train::getTrainNum() const {
    return trainNum;
}

TrainType Train::getTrainType() const {
    return trainType;
}
