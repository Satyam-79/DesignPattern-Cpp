#pragma once
#include"Fruits.h"
#include "Mango.h"
#include "Orange.h"
#include "Orange.h"
#include "Pineapple.h"
class Eater
{
private:
	Fruits* mango;
	Fruits* pineapple;
	Fruits* orange;
public:
	Eater();
	void eatMango();
	void eatPineapple();
	void eatOrange();
};