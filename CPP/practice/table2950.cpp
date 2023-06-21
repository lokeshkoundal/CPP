#include<iostream>
using namespace std;
 int main(){
     int n=29;
     int m=50;
    
     for(int i=0;i<=10;i++){
         int x=n*i;
         int y=m*i;
        cout<< n << " X "<< i << " = " << x <<"\t\t";
        cout<< m << " X "<< i << " = " << y <<endl;

     }
     return 0;
 }