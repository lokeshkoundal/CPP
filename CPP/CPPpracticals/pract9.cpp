//exception handling
#include<iostream>
using namespace std;

void divide(int a,int b){
    cout<<"result : "<<a/b;
}
int main(){
    int a,b;
    cout<<"\nEnter Numerator : ";
    cin>>a;
    cout<<"Enter denominator : ";
    cin>>b;
    try{
        if(b==0)
            throw b;
        
        else
            divide(a,b);

    }
    
    catch(int b){
          cout<<"Error!!!Can't divide by "<<b;
    }
    return 0;
}