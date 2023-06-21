#include<iostream>
using namespace std;
int main(){
  
      for(int i=1;i<=15;i++){
        for(int j=1;j<=20;j++){
           if((i==1&&j>=9&&j<=12)||(i>=2&&i<=9)&&(j==8||j==13)||((i==10)&&(j>=4&&j<=7))||((i==10)&&(j>=14&&j<=17))
              ||((i==11)&&(j==3||j==18)) || ((i==12)&&(j==3||j==18||j==10)) || ((i==13)&&(j==4||j==8||j==17||j==12||j==6||j==14))                ){
       cout<<"*";
        }
       else{
       cout<<" ";
        }
        }
        cout<<endl;
      }

}