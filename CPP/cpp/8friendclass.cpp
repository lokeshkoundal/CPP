//friend class is made to give access of data of one class to an another class !!
#include<iostream>
using namespace std;
class class1{
          private:
            int a,b;
          public:
            void setval(){
              cout<<"Enter the value of a : ";
              cin>>a;
              cout<<"Enter the value of b : ";
              cin>>b;              
            }
            friend class class2;     //friend class declaration
              
};
class class2{
          public:
             void print(class1 ob){
                cout<<"The value of a is : "<<ob.a<<endl;
                cout<<"The value of b is : "<<ob.b<<endl;
             }
             void sum(class1 ob){
                  cout<<"The sum of a and b is : "<<ob.a+ob.b;
             }
};
int main(){
    class1 obj1;
    class2 obj;
    obj1.setval();
    obj.print(obj1);
    obj.sum(obj1);
    return 0;
}