#include<iostream>
using namespace std;
void result(int a,int b){
       cout<<"Result is : "<<a/b;
}
int main(){
    int a,b;
    cout<<"Enter 1st nmbr : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    try{
        if(b==0)
            throw b;
        else
            result(a,b);
    }

    catch(int b){
       cout<<"bsdk "<<b<< " se divide nhi kr skte !!";
    }

    return 0;
}