#include "Fruits.h"
#include "Pineapple.h"
class PineappleAdapter :
    public Fruits
{
private:
    Pineapple adaptee;
public:
    PineappleAdapter(Pineapple*);
    void buy(int);

};