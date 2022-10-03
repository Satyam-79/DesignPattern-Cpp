#pragma once
#include "Fruit.h"
class FruitDecorator :
    public Fruit
{
protected:
    Fruit* decoratedFruit;
public:
    FruitDecorator(Fruit* decoratedFruit);
    void juice();
};

