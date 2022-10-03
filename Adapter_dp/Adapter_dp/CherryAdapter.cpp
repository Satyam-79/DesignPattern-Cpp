#include "CherryAdapter.h"

CherryAdapter::CherryAdapter(Cherry* cherry) {
	this->adaptee = *cherry;
}
void CherryAdapter::buy(int x) {
	adaptee.buy(x);
}