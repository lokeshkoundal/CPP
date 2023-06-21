#include<iostream>
using namespace std;
class base1{
     public:
         int a=20;
         int b=40;

}; 
class base2{
    public:
         int x=50;
         int y=10;
};
class derived:public base1,public base2{
    public:
    void print(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of x is : "<<x<<endl;
        cout<<"The value of y is : "<<y;
    }
};
int main(){
    derived obj;
    obj.print();

    return 0;
}