//function ovverriding or method OR
//it is function ovverriding when functions of same names exist in both parent and child class
#include<iostream>
using namespace std;
class A{
     public:
     void print(){
        cout<<"hello frandsnchai peelo !!";
     }
     void printx(){
        cout<<"The value of x is : ";
     }

};
class B:public A{
    public:
       void print(){
        cout<<"hello frands tatti kha lo !!"<<endl;
     }
     void printx(int x){
        cout<<"The value of x is : "<<x ;
     }
     
};
int main(){
B lokesh;
lokesh.print(); //class b wala func chlega.
//lokesh.printx(); --error bcoz printx of b class need paramenters
}