#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1, x=1;
    int c=a+b;
    cout<<"enter number : ";
    cin>>n;
    while(x<=n){

        if(x==n){
           cout<<c;
        }
        else if(c%2==0){
        c=a+b;
        a=b;
        b=c;
        x++;
        }
    }
    return 0;
}