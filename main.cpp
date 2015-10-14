#include <iostream>
#include <stdlib.h>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

    void func() { cout << "Function1 func() of class Base\n"; }
    void func2() { cout << "Function func2() of class Base\n"; }
};

int main()
{
    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Call method func() for object base" << endl;
    base.func();

    cout << "* Call method func2() for object base" << endl;
    base.func2();

    return 0;
    system("pause");
}
