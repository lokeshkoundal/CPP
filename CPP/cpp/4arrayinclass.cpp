#include<iostream>
using namespace std;
class shop{
     int id[100];
     int price[100];
     int counter;
     public:
         void counterr() {
              counter = 0;
       }
         void getprice();
         void setprice();
                 
};
void shop :: setprice(){
    for(int i=0;i<10;i++){
    cout<<"Enter id of your item : ";
    cin>>id[counter];
    cout<<"Enter the price of your item : ";
    cin>>price[counter];
    counter++;
    }
}
void shop :: getprice(){
    for(int i=0;i<counter;i++){
        cout<<"The id and price of your id is : "<<id[i]<<" "<<price[i]<<endl;
    }
}
int main(){
    shop dukan;
    dukan.counterr();
    dukan.setprice();
    dukan.getprice();
    return 0;
}