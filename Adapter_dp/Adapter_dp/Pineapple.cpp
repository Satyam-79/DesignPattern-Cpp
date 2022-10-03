#include "Pineapple.h"
#include "iostream"
void Pineapple::buy(int x) {
	int weight = 350;
	std::cout << "Bucket has " 
		<< x / weight << " Pineapples.\n";
}