/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "PassengerTrain.h"
#include "GoodsTrain.h"
#include <iostream>

int main() {
    PassengerTrain passengerTrain;

    int trainNum_;
    std::string trainType_;

    //TODO: Create train based on user input
    std::cout << "=======\n";
    std::cout << "Metlink\n";
    std::cout << "=======\n\n";
    std::cout << "====================\n";
    //Take inputs from user
    std::cout << "Enter the Train numer (eg. 123) and type of train (eg. Passenger / Goods):";
    std::cin >> trainNum_;
    passengerTrain.setTrainNum(trainNum_);
    std::cin >> trainType_;
    if (trainType_ == "Passenger") {
        passengerTrain.setTrainType(TrainType::Passenger);
    }
    else if (trainType_ == "Goods") {
        passengerTrain.setTrainType(TrainType::Goods);
    }
    else {
        std::cout << "Invalid input";
    }

    // Create a initial Passenger Train
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

    // Create a initial Goods Train
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


    // Print the initial Passenger Train
    std::cout << "Passenger Train:" << std::endl;
    std::cout << "Train Number: " << passengerTrain.getTrainNum() << std::endl;
    std::cout << "Train Type: " << static_cast<int>(passengerTrain.getTrainType()) << std::endl;
    std::cout << "Driver: " << passengerTrain.getDriver() << std::endl;
    std::cout << "Line: " << static_cast<int>(passengerTrain.getLine()) << std::endl;
    std::cout << "Platform Number: " << passengerTrain.getPlatformNum() << std::endl;
    std::cout << "Start Place: " << static_cast<int>(passengerTrain.getStartPlace()) << std::endl;
    std::cout << "End Place: " << static_cast<int>(passengerTrain.getEndPlace()) << std::endl;
    std::cout << "Start Time: " << passengerTrain.getStartTime() << std::endl;
    std::cout << "End Time: " << passengerTrain.getEndTime() << std::endl;
    std::cout << "Compartments: " << passengerTrain.getCompartments() << std::endl;
    std::cout << "Depature Time: " << passengerTrain.getDepatureTime() << std::endl;
    std::cout << "Cycle Allowed: " << passengerTrain.getCycleAllowed() << std::endl;
    std::cout << "Calegory: " << passengerTrain.getCalegory() << std::endl;
    std::cout << std::endl;

    return 0;
}
