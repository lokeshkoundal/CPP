#include <iostream>  
using namespace std;  
int main()  
{  
    int n;
    int sum=0;
    cout<<"enter the number: ";
    cin>>n;
for(int i=0;i<=n;i++){
    if(i%2==0){
        sum=i+sum;
    }
   
}
 cout<<sum;
return 0;
}
