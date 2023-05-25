/*
Thierry Gibbons - 270067227
CS105-2 Section 2 Question 1 - Inheritance
Metlink
*/
#ifndef GOODSTRAIN_H
#define GOODSTRAIN_H

#include "Trip.h"
#include "GoodsType.h"
#include <iostream>

class GoodsTrain : public Trip {
public:
    void setGoodsType(GoodsType GoodsType);
    GoodsType getGoodsType() const;

    void printGoodsTrains(const GoodsTrain& GoodsTrain);

protected:
    GoodsType Goods;
};

#endif