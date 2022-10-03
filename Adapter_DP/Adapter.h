#pragma once
#include "AbstractPlug.h"
#include "AbstractSwitchBoard.h"

class Adapter :
    public AbstractPlug
{
    public:
        AbstractSwitchBoard* T;
        Adapter(AbstractSwitchBoard* TT);
        void RoundPin();
        void PinCount();
};

