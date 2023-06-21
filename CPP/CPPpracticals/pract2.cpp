#include<iostream>
using namespace std;
int b;

class program2{
    public:
     void incr(int& a){
          a++;
          
     }
     int &setnum(){
        return b;
     }
};
int main(){
program2 obj;
int a;
cout<<"Enter a number : ";
cin>>a;
cout<<endl;
obj.incr(a);

cout<<"After increment using call by reference : a = "<<a<<endl<<endl;;

obj.setnum()=15;

cout<<"After return by reference , value assigned to b = "<<b;

program2 object;
return 0;
}