#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the no. of rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==1&&j==1)||(i==j)){
                cout<<"*";
            }   
            else if((i==n||j==1)&&((j>=1&&j<=n)&&(i>=1&&i<=n))){
            cout<<"*";
               } 
            
               else{
                cout<<" ";
               }  }
               cout<<endl;
    }
    return 0;

}