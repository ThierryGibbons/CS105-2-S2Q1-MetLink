/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#ifndef TRIP_H
#define TRIP_H

#include "Train.h"
#include "TrackLine.h"
#include "Location.h"
#include <string>

class Trip : public Train {
public:
    void setDriver(const std::string& TrainDriver);
    void setLine(TrackLine Line);
    void setPlatformNum(int PlatformNum);
    void setStartPlace(Location StartPlace);
    void setEndPlace(Location EndPlace);
    void setStartTime(int StartTime);
    void setEndTime(int EndTime);
    void setCompartments(int Compartments);

private:
    std::string Driver;
    TrackLine Line;
    int PlatformNum;
    Location StartPlace;
    Location EndPlace;
    int StartTime;
    int EndTime;
    int Compartments;
};

#endif