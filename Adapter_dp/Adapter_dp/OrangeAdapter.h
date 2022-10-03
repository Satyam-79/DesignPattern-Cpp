#include "Fruits.h"
#include "Orange.h"

class OrangeAdapter :
    public Fruits
{
private:
    Orange adaptee;
public:
    OrangeAdapter(Orange*);
    void buy(int);
};

