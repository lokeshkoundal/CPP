#include<iostream>
#include<string>
using namespace std;
class employee{
    //if u dont specify any access specifier then compiler will declare it private by default!!
            private:         //access specifier      
             float salary;   /*dm--data member      private data members can only be accessed
                                                    by public member functions*/              
             
            protected:      //access specifier
             int project;   //dm     

            public:        //access specifier
             string name;  //dm
             int id;       //dm
             void setdata(){                      //member function
                cout<<"Enter name of employee : ";
                getline(cin,name);
                cout<<"Enter id of employee : ";
                cin>>id;
                cout<<"Enter salary of employee : ";
                cin>>salary;
                cout<<"Enter number of projects of the employee : ";
                cin>>project;
             }
             void getdata(){                     //member function
                cout<<"Id and Name : "<<id<<" "<<name<<endl;
                cout<<"Salary : "<<salary<<endl;
                cout<<"No. of projects : "<<project<<endl;
             }

};
int main(){

 employee lokesh;
 lokesh.setdata();
 lokesh.getdata();
 //cout<<lokesh.salary;   --  it'll give error coz it is private and can't be accessed directly!!
 //cout<<project;         -- it is protected --also give error!!
 cout<<lokesh.name<<endl;
 cout<<lokesh.id;




}