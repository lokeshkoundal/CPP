#include<iostream>
using namespace std;
int main(){
     int *ptr=new int[10];
     int* ptr2=new int;
     
     for(int i=0;i<10;i++){
     cout<<"Enter "<<i+1<<" number : ";
     cin>>ptr[i];

     }
     for(int i=0;i<10;i++){
     cout<<"the value is : "<<ptr[i]<<endl;

     }
     //delete *(ptr[5]);

     for(int i=0;i<10;i++){
     cout<<"the value is : "<<ptr[i]<<endl;

     }
    return 0;
}