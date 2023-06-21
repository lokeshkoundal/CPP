#include<iostream>
using namespace std;
class Employee{
        int id;
        int static count; //only executes once ! and value remains same for all objects

        public:
          void setdata(){
               cout<<"Enter the id : "<<endl;
               cin>>id;
               count++;
          }
          void getdata(){
            cout<<"The id is "<<id<<" and emp name  is "<<char(count)<<endl;//typecasting on count!!
          }

};
int Employee :: count=96;//if no value is given count is bydefault 0!!
int main(){
    Employee a,b,c;
    a.setdata();
    a.getdata();

    b.setdata();
    b.getdata();
    
    c.setdata();
    c.getdata();

    return 0;

}