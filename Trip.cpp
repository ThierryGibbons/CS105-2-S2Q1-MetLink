/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "Trip.h"

//Setters
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

void Trip::setStartTime(std::string StartTime) {
    this->StartTime = StartTime;
}

void Trip::setEndTime(std::string EndTime) {
    this->EndTime = EndTime;
}

void Trip::setCompartments(int Compartments) {
    this->Compartments = Compartments;
}

//Getters
std::string Trip::getDriver() const {
    return Driver;
}

TrackLine Trip::getLine() const {
    return Line;
}

int Trip::getPlatformNum() const {
    return PlatformNum;
}

Location Trip::getStartPlace() const {
    return StartPlace;
}

Location Trip::getEndPlace() const {
    return EndPlace;
}

std::string Trip::getStartTime() const {
    return StartTime;
}

std::string Trip::getEndTime() const {
    return EndTime;
}

int Trip::getCompartments() const {
    return Compartments;
}