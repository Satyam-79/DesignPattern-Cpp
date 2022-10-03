#include <iostream>
#include "Fruit.h"
#include "FruitStore.h"

int main()
{
    FruitStore* object = new FruitStore();
    Fruit* fruit = object->getFruit("Bitter");
    fruit->taste();
}
