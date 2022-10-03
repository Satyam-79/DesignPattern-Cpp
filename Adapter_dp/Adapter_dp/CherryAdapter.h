#include "Fruits.h"
#include "Cherry.h"

class CherryAdapter :
    public Fruits
{
private:
    Cherry adaptee;
public:
    CherryAdapter(Cherry*);
    void buy(int);
};