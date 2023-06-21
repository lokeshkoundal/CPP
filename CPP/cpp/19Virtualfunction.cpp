//after linking base class pointer with the derivd classd's object
//if we want to use the methods and properties of derived class--we use virtual functions for that!!

//Run tym polymorphism!!

#include <iostream>
using namespace std;
class base
{
private:
    int a = 5, b;

public:
    virtual void print()  //virtual fucntion will overWrite the defualt behaviour of ptrToObj !!
    {                                            //i.e--now the fucntion of derived class will be executed !!
        cout<<"The value of a is : "<<a;
    }
};
class derived : public base
{
private:
    int x = 5;

public:
    void print()
    {
       cout << "The value of x is : " << x;  //IF THERE IS NO CODE IN DERIVED CLASS'S FUNCTION.
          }                            //THE FUNCTION OF BASE CLASS WILL BE EXECUTED EVEN IF ITS A VIRTUAL FUNC
};
int main()
{
    base *bptr;
    derived *dptr;   //ptr of base class created 
    derived obj;
    bptr = &obj;
    bptr->print();
    
    return 0;
}