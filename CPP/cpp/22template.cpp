//swap using templates : 
#include<iostream>
using namespace std;
template<class T>
void swapp(T& x,T& y){
    T temp;
    temp=x;
    x=y;
    y=temp;

}

int main(){
int a=5;
int b=4;
swapp(a,b);
cout<<"The value of a is : "<<a<<endl;
cout<<"The value of b is : "<<b;

return 0;
}