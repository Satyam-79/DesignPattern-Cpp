#include "FruitStore.h"
Fruit* FruitStore::getFruit(std::string str) {
	if (str == "Sweet")
	{
		Fruit* obj = new Apple();
		return obj;
	}
	else if (str == "Bitter") {
		Fruit* obj = new Amla;
		return obj;
	}
	else {
		Fruit* obj = new Orange();
		return obj;
	}
}