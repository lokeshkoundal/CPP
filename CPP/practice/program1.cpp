//functions
#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
void subtract(int x,int y){
    cout<<x-y;
}

int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<add(a,b)<<endl;
    subtract(a,b);
}