#include<iostream>
#include<string>
using namespace std;
union money{         //better memory managemnt over structures
     int rice;       //bcoz it only stores one variable which u are using in ur progrm
     char car;     //
     float pounds;
     
};
int main(){
    union money m1;
    m1.rice=5;
    cout<<m1.rice<<endl;
    m1.car='x';
    cout<<m1.car<<endl;
    cout<<m1.rice;      //will give garbage value bcoz car is in use !

    return 0;
}