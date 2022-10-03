#include "PineappleAdapter.h"

PineappleAdapter::PineappleAdapter(Pineapple* pineapple) {
	this->adaptee = *pineapple;
}
void PineappleAdapter::buy(int x) {
	adaptee.buy(x);
}