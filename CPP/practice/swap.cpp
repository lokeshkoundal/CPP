#include<iostream>
using namespace std;
int main(){
   int a,b;
   cout<<"enter the value of a: ";
   cin>>a;
   cout<<"enter the value of b: ";
   cin>>b;
   int temp=a;
   a=b;
   b=temp;
   cout<<"the value of a after swapping is "<<a<<endl;
   cout<<"the value of b after swapping is "<<b;
   return 0;

}