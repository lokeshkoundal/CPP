#include<iostream>
#include<string>

using namespace std;
struct employee{
    int id;
    string name;
    float salary;
    void print(){
        cout<<"The name of the employee is : "<<name<<endl;
        cout<<"The id  of the employee is : "<<id<<endl;
        cout<<"The slary of the employee is : "<<salary<<endl;
        
    }
    
};
int main(){
    struct employee lokesh;
    lokesh.id=1;
    lokesh.salary=2000.5;
    lokesh.name="Lokesh";
    lokesh.print();

    struct employee harry;
    harry.id=2;
    harry.name="Harry";
    harry.salary=5555.6;
    harry.print();

   
    return 0;
}