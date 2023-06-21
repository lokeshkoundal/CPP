//function overloading
#include<iostream>
using namespace std;
void sum(int a,int b){
       cout<<" sum of a and b is : "<<a+b<<endl;
}
void sum(double a,double b){
       cout<<" sum of a and b is : "<<a+b<<endl;
}
void sum(int a,double b){
       cout<<" sum of a and b is : "<<a+b;
}
int main(){
sum(10,30);
sum(10.505,20.534);
sum(10,20.56);
}
