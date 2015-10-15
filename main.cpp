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

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }

    void func() { cout << "Function func() of class Child\n"; }
    void func2() { cout << "Function func2() of class Child\n"; }
};

int main()
{
    double R;
    cout<<"Region number = ";
    cin>>R;
    cout<<"\n Hello region "<<R<< endl;

    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Call method func() for object base" << endl;
    base.func();

    cout << "* Call method func2() for object base" << endl;
    base.func2();

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object child" << endl;
    child.func();

    cout << "* Call method func2() for object child" << endl;
    child.func2();

    return 0;
    system("pause");
}
