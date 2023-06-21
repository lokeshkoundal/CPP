//Run tym polymorphism!!
#include <iostream>
using namespace std;
class base
{
private:
    int a = 5, b;

public:
    int print()
    {
        // cout<<"The value of a is : ";
        return a + 5;
    }
};
class derived : public base
{
private:
    int x = 5;

public:
    void print()
    {
        cout << "The value of x is : " << x;
    }
};
int main()
{
    base *bptr;
    base bobj;

    derived *dptr;   //ptr of base class created 
    derived obj;

    bptr = &obj;
    //obj.print();
    cout << bptr -> print(); //function of base class will be executed coz ptr is of base class !
    // bptr->print();
    
    return 0;
}