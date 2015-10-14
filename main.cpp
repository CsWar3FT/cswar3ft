#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

	void func() { cout << "Function func() of class Base\n"; }
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

int main(int argc, char *argv[])
{
	double R;
	cout<<"Region number = ";
	cin>>R;

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

	cin.get();
	return 0;
}