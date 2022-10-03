#include "FruitDecorator.h"

FruitDecorator::FruitDecorator(Fruit* decoratedFruit)
{
	this->decoratedFruit = decoratedFruit;
}
void FruitDecorator::juice() {
	decoratedFruit->juice();
}