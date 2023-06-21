/*
A virtual base class in C++ is a base class that is declared as virtual in a class hierarchy.
When a virtual base class is inherited by a derived class,
all objects of the derived class share a single instance of the virtual base class,
regardless of the number of times the virtual base class is inherited.
This is useful when you have multiple inheritance and
you want to ensure that there is only one instance of a particular 
 base class in the derived class hierarchy.
*/
#include<iostream>
using namespace std;
class A{
     public:
     int a=5;
};
class B:virtual public A{  //1.so when  A is being inherited 2 times in the same class
                           //it'll result in ambiguity/duplicacy !
};                         //2.so to not  send  the A's data 2 times we need to declare 
class C:virtual public A{  //the class A "virtual" so that derived class inherit  
                           //the data of A only once !
};
class D:public C,public B{
    public:
    void print(){
        cout<<a;
    }
};
int main(){
     D obj;
     obj.print();
}