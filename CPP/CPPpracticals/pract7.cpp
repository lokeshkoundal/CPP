#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void inputa(){
         cout<<"Enter the value of A : ";
         cin>>a;
         cout<<"The value of A is : "<<a<<endl;
    }
};

class B{
      public:
        
      void display(){
        A obj;      //--this is containership
        obj.inputa();
      }
};

int main(){
        B object;
        object.display();

    return 0;
}