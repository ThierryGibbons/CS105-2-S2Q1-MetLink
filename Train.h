/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <string>

enum class TrainType
{
    Passenger,
    Goods
};

enum class trackLine
{
    Kapati,
    HuttValley,
    Johnsonville,
    Wairarapa
};

enum class location
{
    Waikane,
    Porirua,
    Kapati,
    Taita,
    UpperHutt,
    Melling,
    Johnsonville,
    Masterton,
    PalmerstonNorth,
    Wellington
};

enum class GoodsType
{
    Personal,
    Mining,
    Wood,
    Livestock,
    Perishable
};

class Train
{
protected:
        int trainNum;
        TrainType trainType;

public:
//Getters
    int setTrainNum();
    TrainType setTrainType();
//Setters
    int getTrainNum(int trainNum);
    TrainType getTrainType(TrainType trainType);
};

class Trip : public Train
{
protected:
    std::string driver;
    trackLine line;
    int platformNum;
    location startPlace;
    location endPlace;
    int startTime;
    int endTime;
    int compartments;

public:
//Setters
    std::string setDriver(std::string Driver);
    trackLine setLine(trackLine Line);
    int setPlatformNum(int platformNum);
    location setStartPlace(location startPlace);
    location setEndPlace(location endPlace);
    int setStartTime(int startTime);
    int setEndTime(int endTime);
    int setCompartments(int compartments);
//Getters
    std::string getDriver(std::string Driver);
    trackLine getLine(trackLine Line);
    int getPlatformNum(int platformNum);
    location getStartPlace(location startPlace);
    location getEndPlace(location endPlace);
    int getStartTime(int startTime);
    int getEndTime(int endTime);
    int getCompartments(int compartments);
};

class goodsTrain : public Trip
{
protected:
    GoodsType goodsType;

public:
//Setters
    GoodsType setGoodsType(GoodsType goodsType);
//Getters
    GoodsType getGoodsType(GoodsType goodsType);
};

class passengerTrain : public Trip
{
protected:
    int depatureTime;
    bool cycleAllowed;
    bool Calegory;

public:
//Setters
    int setDepatureTime(int depatureTime);
    bool setCycleAllowed(bool cycleAllowed);
    bool setCalegory(bool Calegory);
//Getters
    int getDepatureTime(int depatureTime);
    bool getCycleAllowed(bool cycleAllowed);
    bool getCalegory(bool Calegory);
};

#endif