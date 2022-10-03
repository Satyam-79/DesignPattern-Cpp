#include "Orange.h"
#include "iostream"
void Orange::buy(int x) {
	int weight = 200;
	std::cout << "Bucket has " 
		<< x / weight << " Oranges.\n";
}