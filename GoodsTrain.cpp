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
