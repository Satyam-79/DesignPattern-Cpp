#include "FreshFruitDecorator.h"

FreshFruitDecorator::FreshFruitDecorator(Fruit* decoratedFruit) :FruitDecorator(decoratedFruit)
{
}

void FreshFruitDecorator::juice()
{
	decoratedFruit->juice();
	setFreshFruit(decoratedFruit);
}

void FreshFruitDecorator::setFreshFruit(Fruit* decoratedfruit)
{
	std::cout << "\nFresh : Juice";
}
