#pragma once
#include <iostream>
#include "FruitDecorator.h"

class FreshFruitDecorator :
    public FruitDecorator
{
public:
    FreshFruitDecorator(Fruit* decoratedFruit);
    void juice();
private:
    void setFreshFruit(Fruit* decoratedfruit);
};

