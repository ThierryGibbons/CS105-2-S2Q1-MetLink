/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#include "GoodsTrain.h"

void GoodsTrain::setGoodsType(GoodsType GoodsType) {
    Goods = GoodsType;
}

GoodsType GoodsTrain::getGoodsType() const {
    return Goods;
}

void GoodsTrain::printGoodsTrains(const GoodsTrain& goodsTrain) {
    std::cout << "*****" << goodsTrain.getLine() << " Line Train information*****\n";
    std::cout << "Train Number: " << goodsTrain.getTrainNum();
    std::cout << "     Platform Number: " << goodsTrain.getPlatformNum() << "\n";
    std::cout << goodsTrain.getStartPlace() << " -> " << goodsTrain.getEndPlace() << "\n";
    std::cout << "Start Time: " << goodsTrain.getStartTime() << "\n";
}