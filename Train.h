/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#ifndef TRAIN_H
#define TRAIN_H

#include "TrainType.h"

class Train {
public:
    void setTrainNum(int trainNum);
    void setTrainType(TrainType trainType);
    int getTrainNum() const;
    TrainType getTrainType() const;

protected:
    int trainNum;
    TrainType trainType;
};

#endif