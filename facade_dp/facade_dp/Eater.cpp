#include "Eater.h"

Eater::Eater() {
	mango = new Mango();
	pineapple = new Pineapple();
	orange = new Orange();
}
void Eater::eatMango() {
	mango->eat();
}
void Eater::eatPineapple() {
	pineapple->eat();
}
void Eater::eatOrange() {
	orange->eat();
}