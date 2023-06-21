#include <iostream>  
#include<string.h>
using namespace std;  
int main()  
{  
int i;
int num;
float sum=0;
float avg;
for(i=1;i;i++){
    cout<<"enter ur "<<i<<" number: "<<endl;
    cin>>num;
     if(num==int('q')){
         goto potty;
     }

    sum=num+sum; //or sum+=num;
}
potty:
    avg=sum/10;
    cout<<"sum is: "<<sum<<endl; 
    cout<<"average is :"<<avg;
return 0;

}