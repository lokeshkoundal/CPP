#include<iostream>
using namespace std;
class student{
    protected:
      int a=69;
};
class test: virtual public student{
    public:
    void print(){
        cout<<"The value of a thru test is "<<a<<endl;
    }
};
class sports:virtual public student{
    public:
    void print(){
        cout<<"The value of a thru sports is "<<a<<endl;
    }
};
class result:public test,public sports {
    public:
    void print(){
        cout<<"The value of a thru result is "<<a<<endl;
    }
};
int main(){
     result obj;
     obj.print();

    return 0;
}