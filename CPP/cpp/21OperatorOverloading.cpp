#include<iostream>
using namespace std;
//operator overloaading is used to perform operations on user defined datatypes!
//assigning new task to the builtin operators!
//we change work operation of an operator --not its meaning !!

//overloading unary operator(++,--)
class demo{
     int x;
     public:
      void setdata(){
        cout<<"Enter the value of x :";
        cin>>x;
      }
      void getdata(){
        cout<<"The value of x is : " <<x<<endl;
      }
     
      void operator ++(){
        x=x+1;
      }

};
int main(){
    demo aa;
    aa.setdata();
    cout<<"The original value :- "<<endl;
    aa.getdata();
    cout<<"Encremented is :- "<<endl;
    ++aa;
    aa.getdata();
    
return 0;
}