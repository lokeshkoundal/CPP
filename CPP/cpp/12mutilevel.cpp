#include<iostream>
using namespace std;
class base{
     private:            //private data can't be inherited !
     int a;
     public:
     int x=1,y=2,z=3;

};
class derived1:public base {
      public:
      int p=55;
        void printnum(){
            cout<<"The value of x is : "<<x<<endl;
            cout<<"The value of y is : "<<y<<endl;
            cout<<"The value of z is : "<<z<<endl;
        }

};
class derived2:public derived1{
           public:
           void print(){
           cout<<"The value of x is : "<<x<<endl;
           cout<<"The value of y is : "<<y<<endl;
           cout<<"The value of z is : "<<z<<endl;
           cout<<"The value of p is : "<<p;

           }

};
int main(){
 derived1 obj;
 obj.printnum();

 derived2 obj1;
 obj1.print();
 return 0;

}