#include "Adapter.h"
Adapter::Adapter(AbstractSwitchBoard* TT) {
    T = TT;
}
void Adapter::RoundPin() {
    T->FlatPin();
}
void Adapter::PinCount() {
    T->PinCount();
}