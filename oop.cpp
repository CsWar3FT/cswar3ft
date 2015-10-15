#include "oop.h"
#include <iostream>

using namespace std;

// Base
Base::Base()
{
    cout << "Construct Base object\n";
}

Base::~Base()
{
    cout << "Destruct Base object\n";
}

void Base::func()
{
    cout << "Function func() of class Base\n";
}

void Base::func2()
{
    cout << "Function func() of class Base\n";
}

// Child
Child::Child()
{
   cout << "Construct Child object\n";
}

Child::~Child()
{
    cout << "Destruct Child object\n";
}

void Child::func()
{
    cout << "Function func() of class Child\n";
}

void Child::func2()
{
    cout << "Function func() of class Child\n";
}
