#include<iostream>
using namespace std;
class employee{
    private:
    int salary;
    int id;
   public:
    void setid(){
      salary=200000;
      cout<<"Enter the id : ";
      cin>>id;
    }
    void getid(){
        cout<<"the id of this employee is : "<<id<<endl;
    }
     

};
int main(){
    employee kiras[3];
    //kiras[0].setid();
    /*kiras[0].getid();
    kiras[1].setid();
    kiras[1].getid();
    kiras[2].setid();
    kiras[2].getid();
    kiras[3].setid();
    kiras[3].getid();*/
    for(int i = 0;i<3;i++){
        kiras[i].setid();
        kiras[i].getid();
    
    }
    return 0;

}