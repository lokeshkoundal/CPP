#include<iostream>
using namespace std;
class A{
      int a;
      public:
      int b;
        void setdata(int a){    //jis object ne func call kra h uspe point krega this pointer and we get access to all of object's variavbles !
                //a=a;      --  it'll give garbage value as both variables are given same name !
                this->a = a;   //but we can use 'this' pointer to point to the object which invokes the mem function!
        }
        void getdata(){
            cout<<"the value of a is : "<<a<<endl;
        }
};
int main(){
    A a;
    A *p; 
    p=&a;
    //a.setdata(4);    we us " . " with object !
    //a.getdata();
    p->setdata(5);    //and we use "->" with pointer !  
    p->getdata();     //object pointer 
    //agar pointer ke through value retrieve ya bhejni h to "->" operator lgana pdega bsdk !
    a.b=69;
    cout<<"The value of b using ptr is : "<<p->b<<endl;
    cout<<"The value of b directly :  "<<a.b;

}