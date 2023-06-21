#include<iostream>
using namespace std;
class base{
     private:            //private data can't be inherited !
     int a;
     public:
     int x=1,y=2,z=3;

};
class derived:public base {
      public:
        void printnum(){
            cout<<"The value of x is : "<<x<<endl;
            cout<<"The value of y is : "<<y<<endl;
            cout<<"The value of z is : "<<z;
        }

};
int main(){
 derived obj;
 obj.printnum();

}