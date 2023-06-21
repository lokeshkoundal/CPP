//static function is created to acces only static members/variables!!
//static functions can only access static variables and can't access simple variables! 
#include<iostream>
using namespace std;
class Employee{
        int id;
        int static count;    //every object can use and modify static variable!!

        public:
          void setdata(){
               cout<<"Enter the id : ";
               cin>>id;
               count++;
          }
          void getdata(){
            cout<<"The id is "<<id<<" and emp name  is "<<char(count)<<endl;//typecasting on count!!
          }
          static void getcount(){          //this is static function!!
            cout<<"The value of count is : "<<count<<endl;
            //cout<<"The id is "<<id<<endl;   --it'll give eroor bcoz id is not a static variable

          }


};
int Employee :: count=96;//if no value if give count is bydefault 0!!
int main(){
    Employee a,b,c;
    a.setdata();
    a.getdata();
    a.getcount();

    b.setdata();
    b.getdata();
    b.getcount();

    c.setdata();
    c.getdata();
    c.getcount();

    return 0;

}