#include <iostream>
#include "Fruits.h"
#include "Cherry.h"
#include "CherryAdapter.h"
#include "Orange.h"
#include "OrangeAdapter.h"
#include "Pineapple.h"
#include "PineappleAdapter.h"

int main()
{

	Fruits* fruit[] = { new OrangeAdapter(new Orange()),
		new PineappleAdapter(new Pineapple()),
		new CherryAdapter(new Cherry()) };

	int x = 4000;
	for (Fruits* fruits:fruit)
	{
		fruits->buy(x);
	}
}
