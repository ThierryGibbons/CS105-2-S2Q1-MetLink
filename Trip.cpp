/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "Trip.h"

void Trip::setDriver(const std::string& TrainDriver) {
    Driver = TrainDriver;
}

void Trip::setLine(TrackLine Line) {
    this->Line = Line;
}

void Trip::setPlatformNum(int PlatformNum) {
    this->PlatformNum = PlatformNum;
}

void Trip::setStartPlace(Location StartPlace) {
    this->StartPlace = StartPlace;
}

void Trip::setEndPlace(Location EndPlace) {
    this->EndPlace = EndPlace;
}

void Trip::setStartTime(int StartTime) {
    this->StartTime = StartTime;
}

void Trip::setEndTime(int EndTime) {
    this->EndTime = EndTime;
}

void Trip::setCompartments(int Compartments) {
    this->Compartments = Compartments;
}
