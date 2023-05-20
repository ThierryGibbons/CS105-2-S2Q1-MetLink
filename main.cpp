/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "PassengerTrain.h"
#include "GoodsTrain.h"
#include <iostream>

int main() {
    // Create a passenger train
    PassengerTrain passengerTrain;
    passengerTrain.setTrainNum(1);
    passengerTrain.setTrainType(TrainType::Passenger);
    passengerTrain.setDriver("John Doe");
    passengerTrain.setLine(TrackLine::Kapiti);
    passengerTrain.setPlatformNum(1);
    passengerTrain.setStartPlace(Location::Wellington);
    passengerTrain.setEndPlace(Location::Kapati);
    passengerTrain.setStartTime(900);  // 9:00 AM
    passengerTrain.setEndTime(1030);  // 10:30 AM
    passengerTrain.setCompartments(10);
    passengerTrain.setDepatureTime(900);
    passengerTrain.setCycleAllowed(true);
    passengerTrain.setCalegory(true);

    // Create a goods train
    GoodsTrain goodsTrain;
    goodsTrain.setTrainNum(2);
    goodsTrain.setTrainType(TrainType::Goods);
    goodsTrain.setDriver("Jane Doe");
    goodsTrain.setLine(TrackLine::HuttValley);
    goodsTrain.setPlatformNum(2);
    goodsTrain.setStartPlace(Location::Wellington);
    goodsTrain.setEndPlace(Location::UpperHutt);
    goodsTrain.setStartTime(800);  // 8:00 AM
    goodsTrain.setEndTime(930);  // 9:30 AM
    goodsTrain.setCompartments(5);
    goodsTrain.setGoodsType(GoodsType::Wood);

    // Now you can use these instances in your application logic
    // ...

    return 0;
}
