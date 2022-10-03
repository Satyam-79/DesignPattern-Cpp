#include <iostream>
#include "Fruit.h"
#include "Litchi.h"
#include "FreshFruitDecorator.h"
#include "Strawberry.h"

int main()
{
	Fruit* litchi = new Litchi();
	Fruit* freshLitchi = new FreshFruitDecorator(new Litchi());
	Fruit* freshStrawberry = new FreshFruitDecorator(new Strawberry());
	std::cout << "Litchi with pink in color";
	litchi->juice();
	std::cout << "\n\nFresh Litchi juice";
	freshLitchi->juice();
	std::cout <<  "\n\nFresh Strawberry juice";
	freshStrawberry->juice();
	std::cout << std::endl;
}