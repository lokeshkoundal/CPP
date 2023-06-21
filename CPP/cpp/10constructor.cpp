#include<iostream>
using namespace std;
class set{
      public:
        int sum;
        int i;
        int a,b;
       set(){                       //default
        i=5;
        cout<<"The value of i is : "<<i<<endl;

       } 
       set(int x,int y=1){           //prametarized  
        a=x;
        sum=x+y;
        cout<<"value of A retrieved using parametarized constuctor is : "<<x<<endl;
        cout<<"value of B retrieved using parametarized constuctor is : "<<y<<endl;
       }
       set(set& copy){             //copy 
        cout<<"Sum of a and b using copy constructor : "<<copy.sum<<endl;
        cout<<"a is : "<<copy.a<<endl;     
        
       }
       ~set(){                    //destructor
              cout<<"Memory deallocated using destructor "<<endl;
       }

};
int main(){
    int a;
    int b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    set obj0;
    set obj(a,b); //parametarized constructor bcoz it is taking parameters unlike default constructor
    set obj2(obj);//copy constructor as parameter is an another object 
    return 0;
}