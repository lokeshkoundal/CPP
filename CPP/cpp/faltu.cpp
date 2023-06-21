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
    
     void print(int a)  //virtual fucntion will overWrite the defualt behaviour of ptrToObj !!
    {                                            //i.e--now the fucntion of derived class will be executed !!
        cout<<"The value of a is : "<<a;
    }
    
};
class derived : public base
{
private:
    int x = 5;

public:    
     void print(int x,int y)  //virtual fucntion will overWrite the defualt behaviour of ptrToObj !!
    {                                            //i.e--now the fucntion of derived class will be executed !!
        cout<<"The value of a is : "<<x+y;
    }

};
int main()
{
    base *bptr;
    derived *dptr;   //ptr of base class created 
    derived obj;
    bptr = &obj;
    obj.print(5,6);
    obj.print2(6);
   // bptr->print();
    
    return 0;
}