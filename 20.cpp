#include <iostream>
using namespace std;
class base
{
public:
    int data1;
    void display1()
    {
        cout << "data 1 is " << data1 << endl;
    }
};
class derived : public base
{
public:
    int data2;
    void display2()
    {
        cout << "data 2 is " << data2 << endl;
    }
};

int main()
{
    base *baseptr;
    base b1;
    derived d1;
    baseptr = &d1;
    baseptr->data1 = 55;
    baseptr->display1();
    b1.data1 = 66;
    b1.display1();
    baseptr->display1();
    return 0;
}