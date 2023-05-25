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

std::string Trip::getLine() const {
    switch (Line) {
        case TrackLine::Kapiti: return "Kapiti";
        case TrackLine::HuttValley: return "HuttValley";
        case TrackLine::Johnsonville: return "Johnsonville";
        case TrackLine::Wairarapa: return "Wairarapa";
        default: throw std::runtime_error("Invalid line");
    }
}

int Trip::getPlatformNum() const {
    return PlatformNum;
}

std::string Trip::getStartPlace() const {
    switch (StartPlace) {
        case Location::Waikane: return "Waikane";
        case Location::Porirua: return "Porirua";
        case Location::Kapati: return "Kapati";
        case Location::Taita: return "Taita";
        case Location::UpperHutt: return "UpperHutt";
        case Location::Melling: return "Melling";
        case Location::Johnsonville: return "Johnsonville";
        case Location::Masterton: return "Masterton";
        case Location::PalmerstonNorth: return "PalmerstonNorth";
        case Location::Wellington: return "Wellington";
        default: throw std::runtime_error("Invalid location");
    }
}

std::string Trip::getEndPlace() const {
    switch (EndPlace) {
        case Location::Waikane: return "Waikane";
        case Location::Porirua: return "Porirua";
        case Location::Kapati: return "Kapati";
        case Location::Taita: return "Taita";
        case Location::UpperHutt: return "UpperHutt";
        case Location::Melling: return "Melling";
        case Location::Johnsonville: return "Johnsonville";
        case Location::Masterton: return "Masterton";
        case Location::PalmerstonNorth: return "PalmerstonNorth";
        case Location::Wellington: return "Wellington";
        default: throw std::runtime_error("Invalid location");
    }
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