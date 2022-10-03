#include "OrangeAdapter.h"

OrangeAdapter::OrangeAdapter(Orange* orange) {
	this->adaptee = *orange;
}
void OrangeAdapter::buy(int x) {
	adaptee.buy(x);
}
