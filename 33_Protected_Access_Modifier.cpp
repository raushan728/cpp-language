#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public:
};

class Derived : protected Base
{
    // public:
    //      void set(int x)
    //      {
    //         a=x;
    //      }
    //      int get()
    //      {
    //         return a;
    //      }
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class

    // d.set(4);
    // cout<<d.get();
}
