#ifndef OOP_H
#define OOP_H

class Base
{
public:
    Base();
    ~Base();

    void func();
    void func2();
};

class Child: public Base
{
public:
    Child();
    ~Child();

    void func();
    void func2();
};

#endif // OOP_H
