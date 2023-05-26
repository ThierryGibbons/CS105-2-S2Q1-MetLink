/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "PassengerTrain.h"
#include "GoodsTrain.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main() {

    std::vector<PassengerTrain> passengerTrains;
    std::vector<GoodsTrain> goodsTrains;
    std::unordered_map<std::string, std::vector<PassengerTrain>> passengerTrainMap;
    std::unordered_map<std::string, std::vector<GoodsTrain>> goodsTrainMap;

    bool trainInput = true;
    int choice = 0;

    int trainNum_;
    std::string trainType_;
    int startPlace_;
    int endPlace_;
    std::string driverName_;
    int numCompartments_;
    int platformNum_;
    std::string startTime_;
    std::string endTime_;
    int trackLine_;
    std::string trackLine_string;
    int cycleAllowed_;
    int trainStatus_;
    int category_;

    // Title


    do
    {
        PassengerTrain newPassengerTrain;
        GoodsTrain newGoodsTrain;

        // Menu
        std::cout << "=======\n";
        std::cout << "Metlink\n";
        std::cout << "=======\n\n";
        std::cout << "====================\n";
        std::cout << "1. Create Train\n";
        std::cout << "2. Print Train\n";
        std::cout << "3. Print All Trains\n";
        std::cout << "4. Exit\n";
        std::cout << "Selection: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                // Train Number and Type
                std::cout << "Enter Train number (eg. 123) and type of train (Passenger / Goods): ";
                std::cin >> trainNum_ >> trainType_;
                std::transform(trainType_.begin(), trainType_.end(), trainType_.begin(), ::tolower); //Make trainType_ lowercase

                //Start Place
                std::cout << "\nEnter start place of train.\n1. Waikane\n2. Porirua\n3. Kapati\n4. Taita\n5. UpperHutt\n6. Melling\n7. Johnsonville\n8. Masterton\n7. PalmerstonNorth\n8. Wellington\nSelection: ";
                std::cin >> startPlace_;

                //End Place
                std::cout << "\nEnter end place of train.\n1. Waikane\n2. Porirua\n3. Kapati\n4. Taita\n5. UpperHutt\n6. Melling\n7. Johnsonville\n8. Masterton\n7. PalmerstonNorth\n8. Wellington\nSelection: ";
                std::cin >> endPlace_;

                //Driver Name
                std::cout << "\nEnter Drivers Name: ";
                std::cin >> driverName_;

                //Number of compartments
                std::cout << "Enter number of compartments: ";
                std::cin >> numCompartments_;

                //Platform Number
                std::cout << "Enter platform number: ";
                std::cin >> platformNum_;

                //Start time
                std::cout << "\nEnter start time(eg. 9:00am): ";
                std::cin >> startTime_;

                //End time
                std::cout << "Enter end time(eg. 10:45am): ";
                std::cin >> endTime_;

                //Track Line
                std::cout << "\nEnter track line.\n1. Kapiti\n2. HuttValley\n3. Johnsonville\n4. Wairarapa\nSelection: ";
                std::cin >> trackLine_;

                if (trainType_ == "passenger")
                {
                    //cycle allowed or not
                    std::cout << "\nEnter cycle allowed or not\n1. True\n2. False\nSelection: ";
                    std::cin >> cycleAllowed_;

                    //train status
                    std::cout << "\nEnter train status.\n1.Departed\n2.Boarding\nSelection: ";
                    std::cin >> trainStatus_;

                    // category
                    std::cout << "\nEnter category.\n1. Express\n2. Allstops\nSelection: ";
                    std::cin >> category_;
                }

                // Create a train based on user input
                if (trainType_ == "passenger") {
                    //Create Train
                    newPassengerTrain.setTrainNum(trainNum_);
                    newPassengerTrain.setTrainType(TrainType::Passenger);

                    //Start Place
                    switch (startPlace_)
                    {
                        case 1:
                            newPassengerTrain.setStartPlace(Location::Waikane);
                            break;
                        case 2:
                            newPassengerTrain.setStartPlace(Location::Porirua);
                            break;
                        case 3:
                            newPassengerTrain.setStartPlace(Location::Kapati);
                            break;
                        case 4:
                            newPassengerTrain.setStartPlace(Location::Taita);
                            break;
                        case 5:
                            newPassengerTrain.setStartPlace(Location::UpperHutt);
                            break;
                        case 6:
                            newPassengerTrain.setStartPlace(Location::Melling);
                            break;
                        case 7:
                            newPassengerTrain.setStartPlace(Location::Johnsonville);
                            break;
                        case 8:
                            newPassengerTrain.setStartPlace(Location::Masterton);
                            break;
                        case 9:
                            newPassengerTrain.setStartPlace(Location::PalmerstonNorth);
                            break;
                        case 10:
                            newPassengerTrain.setStartPlace(Location::Wellington);
                            break;
                        default:
                            std::cout << "Invalid input: Start Place";
                            return 0;
                    }

                    //End Place
                    switch (endPlace_)
                    {
                        case 1:
                            newPassengerTrain.setEndPlace(Location::Waikane);
                            break;
                        case 2:
                            newPassengerTrain.setEndPlace(Location::Porirua);
                            break;
                        case 3:
                            newPassengerTrain.setEndPlace(Location::Kapati);
                            break;
                        case 4:
                            newPassengerTrain.setEndPlace(Location::Taita);
                            break;
                        case 5:
                            newPassengerTrain.setEndPlace(Location::UpperHutt);
                            break;
                        case 6:
                            newPassengerTrain.setEndPlace(Location::Melling);
                            break;
                        case 7:
                            newPassengerTrain.setEndPlace(Location::Johnsonville);
                            break;
                        case 8:
                            newPassengerTrain.setEndPlace(Location::Masterton);
                            break;
                        case 9:
                            newPassengerTrain.setEndPlace(Location::PalmerstonNorth);
                            break;
                        case 10:
                            newPassengerTrain.setEndPlace(Location::Wellington);
                            break;
                        default:
                            std::cout << "Invalid input: End Place";
                            return 0;
                    }

                    //Driver Name
                    newPassengerTrain.setDriver(driverName_);

                    //Number of compartments
                    newPassengerTrain.setCompartments(numCompartments_);

                    //Platform Number
                    newPassengerTrain.setPlatformNum(platformNum_);

                    //Start time
                    newPassengerTrain.setStartTime(startTime_);

                    //End time
                    newPassengerTrain.setEndTime(endTime_);

                    //Track Line
                    switch (trackLine_)
                    {
                        case 1:
                            newPassengerTrain.setLine(TrackLine::Kapiti);
                            break;
                        case 2:
                            newPassengerTrain.setLine(TrackLine::HuttValley);
                            break;
                        case 3:
                            newPassengerTrain.setLine(TrackLine::Johnsonville);
                            break;
                        case 4:
                            newPassengerTrain.setLine(TrackLine::Wairarapa);
                            break;
                    }

                    //cycle allowed or not
                    switch (cycleAllowed_)
                    {
                        case 1:
                            newPassengerTrain.setCycleAllowed(true);
                            break;
                        case 2:
                            newPassengerTrain.setCycleAllowed(false);
                            break;
                        default:
                            std::cout << "Invalid input: Cycle Allowed";
                            return 0;
                    }

                    //train status
                    switch (trainStatus_)
                    {
                        case 1:
                            newPassengerTrain.setTrainStatus(true);
                            break;
                        case 2:
                            newPassengerTrain.setTrainStatus(false);
                            break;
                    }

                    //category
                    switch (category_)
                    {
                        case 1:
                            newPassengerTrain.setCategory(true);
                            break;
                        case 2:
                            newPassengerTrain.setCategory(false);
                            break;
                        default:
                            std::cout << "Invalid input: Category";
                            return 0;
                    }

                    //Add train to vector
                    passengerTrains.push_back(newPassengerTrain);

                    //Add train to hash map based on track line
                    passengerTrainMap[newPassengerTrain.getLine()].push_back(newPassengerTrain);
                }
                else if (trainType_ == "goods") {
                    //Create Train
                    newGoodsTrain.setTrainNum(trainNum_);
                    newGoodsTrain.setTrainType(TrainType::Goods);

                    //Start Place
                    switch (startPlace_)
                    {
                        case 1:
                            newGoodsTrain.setStartPlace(Location::Waikane);
                            break;
                        case 2:
                            newGoodsTrain.setStartPlace(Location::Porirua);
                            break;
                        case 3:
                            newGoodsTrain.setStartPlace(Location::Kapati);
                            break;
                        case 4:
                            newGoodsTrain.setStartPlace(Location::Taita);
                            break;
                        case 5:
                            newGoodsTrain.setStartPlace(Location::UpperHutt);
                            break;
                        case 6:
                            newGoodsTrain.setStartPlace(Location::Melling);
                            break;
                        case 7:
                            newGoodsTrain.setStartPlace(Location::Johnsonville);
                            break;
                        case 8:
                            newGoodsTrain.setStartPlace(Location::Masterton);
                            break;
                        case 9:
                            newGoodsTrain.setStartPlace(Location::PalmerstonNorth);
                            break;
                        case 10:
                            newGoodsTrain.setStartPlace(Location::Wellington);
                            break;
                        default:
                            std::cout << "Invalid input";
                            return 0;
                    }

                    //End Place
                    switch (endPlace_)
                    {
                        case 1:
                            newGoodsTrain.setEndPlace(Location::Waikane);
                            break;
                        case 2:
                            newGoodsTrain.setEndPlace(Location::Porirua);
                            break;
                        case 3:
                            newGoodsTrain.setEndPlace(Location::Kapati);
                            break;
                        case 4:
                            newGoodsTrain.setEndPlace(Location::Taita);
                            break;
                        case 5:
                            newGoodsTrain.setEndPlace(Location::UpperHutt);
                            break;
                        case 6:
                            newGoodsTrain.setEndPlace(Location::Melling);
                            break;
                        case 7:
                            newGoodsTrain.setEndPlace(Location::Johnsonville);
                            break;
                        case 8:
                            newGoodsTrain.setEndPlace(Location::Masterton);
                            break;
                        case 9:
                            newGoodsTrain.setEndPlace(Location::PalmerstonNorth);
                            break;
                        case 10:
                            newGoodsTrain.setEndPlace(Location::Wellington);
                            break;
                        default:
                            std::cout << "Invalid input";
                            return 0;
                    }

                    //Driver Name
                    newGoodsTrain.setDriver(driverName_);

                    //Number of compartments
                    newGoodsTrain.setCompartments(numCompartments_);

                    //Platform Number
                    newGoodsTrain.setPlatformNum(platformNum_);

                    //Start time
                    newGoodsTrain.setStartTime(startTime_);

                    //End time
                    newGoodsTrain.setEndTime(endTime_);

                    //Track Line
                    switch (trackLine_)
                    {
                        case 1:
                            newGoodsTrain.setLine(TrackLine::Kapiti);
                            break;
                        case 2:
                            newGoodsTrain.setLine(TrackLine::HuttValley);
                            break;
                        case 3:
                            newGoodsTrain.setLine(TrackLine::Johnsonville);
                            break;
                        case 4:
                            newGoodsTrain.setLine(TrackLine::Wairarapa);
                            break;
                    }


                    //Add train to vector
                    goodsTrains.push_back(newGoodsTrain);

                    //Add train to hash map based on track line
                    goodsTrainMap[newGoodsTrain.getLine()].push_back(newGoodsTrain);
                }
                else {
                    std::cout << "Invalid input";
                    return 0;
                }
                break;
            case 2:
                //Print train
                //get train, passenger or goods
                std::cout << "\n=============\n"; //Title
                std::cout << "\nPrint Train\n";
                std::cout << "\n=============\n\n";
                std::cout << "\n====================\n";

                std::cout << "Select Train Type(eg. passenger, goods)";
                std::cin >> trainType_;

                std::cout << "Select Train Line\n1. Kapiti\n2. Hutt Valley\n3. Johnsonville\n4. Wairarapa\nSelection: ";
                std::cin >> trackLine_;
                switch (trackLine_)
                {
                    case 1:
                        trackLine_string = "Kapiti";
                        break;
                    case 2:
                        trackLine_string = "Hutt Valley";
                        break;
                    case 3:
                        trackLine_string = "Johnsonville";
                        break;
                    case 4:
                        trackLine_string = "Wairarapa";
                        break;
                    default:
                        std::cout << "Invalid input";
                        return 0;
                }

                std::cout << "\n====================\n";
                if (trainType_ == "passenger")
                {
                    if (passengerTrainMap.find(trackLine_string) != passengerTrainMap.end())
                    {
                        std::cout << "\nPassenger Train Details:\n";
                        for (const auto& passengerTrain : passengerTrainMap[trackLine_string]) //print all passenger trains
                        {
                            std::cout << "\n\n====================\n";
                            newPassengerTrain.printPassengerTrains(passengerTrain);
                            std::cout << "====================\n";
                        }
                    }
                    else
                    {
                        std::cout << "No passenger trains on this line";
                    }
                } else if (trainType_ == "goods")
                {
                    if (goodsTrainMap.find(trackLine_string) != goodsTrainMap.end())
                    {
                        std::cout << "\nGoods Train Details:\n";
                        for (const auto& goodsTrain : goodsTrainMap[trackLine_string]) //print all goods trains
                        {
                            std::cout << "\n\n====================\n";
                            newGoodsTrain.printGoodsTrains(goodsTrain);
                            std::cout << "====================\n";
                        }
                    }
                    else
                    {
                        std::cout << "No goods trains on this line";
                    }
                }
                break;
            case 3:
                //Print train details
                std::cout << "\n=============\n"; //Title
                std::cout << "\nTrain Details\n";
                std::cout << "\n=============\n\n";
                std::cout << "\n====================\n";

                std::cout << "\nPassenger Train Details:\n";
                for (const auto& passengerTrain : passengerTrains) //print all passenger trains
                {
                    std::cout << "\n\n====================\n";
                    newPassengerTrain.printPassengerTrains(passengerTrain);
                    std::cout << "====================\n";
                }

                std::cout << "\n====================\n";

                std::cout << "\nGoods Train Details:\n";
                for (const auto& goodsTrain : goodsTrains) //print all goods trains
                {
                    std::cout << "\n\n====================\n";
                    newGoodsTrain.printGoodsTrains(goodsTrain);
                    std::cout << "====================\n";
                }
                break;
            case 4:
                // Exit
                break;
            default:
                std::cout << "Invalid Selection\n";
                break;
        }

        std::cout << "\n\n";
    } while (choice != 4);

    return 0;
}
