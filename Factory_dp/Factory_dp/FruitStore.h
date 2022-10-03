#pragma once
#include"Fruit.h"
#include<string>
#include "Amla.h"
#include "Apple.h"
#include "Orange.h"
class FruitStore
{
public:
	Fruit* getFruit(std::string str);
};

