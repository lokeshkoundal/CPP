/*An abstract base class in C++ is a class that is designed to be used as a base class only,
it can never be instantiated directly. An abstract base class is defined by declaring
one or more of its virtual functions as pure virtual functions,
which means that the function has no implementation and must be overridden by a derived class.*/


#include <iostream>
using namespace std;
class base
{
private:
    int a = 5, b;

public:
int s=400;
    virtual void print()=0;//do-nothing function-->Pure Virtual function!!
    void xx(){
      cout<<"hii";
    }
};                         /*now this function wont be executed anyhow!!
                           you'll need to create the same name function in the derived class--compulsary!
                           ABC class bni hi inherit hone ke liye,not to be executed!!*/
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
    derived *dptr;   //ptr of base class created 
    derived obj;
    bptr = &obj;
   //  base obj2;
    bptr->print();
     obj.xx();
    
    return 0;
}
