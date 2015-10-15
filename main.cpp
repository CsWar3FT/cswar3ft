#include <iostream>
#include <oop.h>

using namespace std;

int main()
{
    double R;
    cout<<"Region number = ";
    cin>>R;
    cout<<"\n Hello region "<<R;

    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    base.func();

    cout << "* Call method func2() for object base" << endl;
    base.func2();

    cout << "* Call method func() for object child" << endl;
    child.func();

    cout << "* Call method func() for object child" << endl;
    child.func2();

    cin.get();
    return 0;
}
