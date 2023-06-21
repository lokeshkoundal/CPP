#include <iostream>  
using namespace std;  
int main()  
{  
int i;
int num;
float sum=0;
float avg;
for(i=1;i<=10;i++){
    cout<<"enter ur "<<i<<" number: "<<endl;
    cin>>num;
    sum=num+sum; //or sum+=num;
    }
    avg=sum/10;
    cout<<"sum is: "<<sum<<endl; 
    cout<<"average is :"<<avg;

}
