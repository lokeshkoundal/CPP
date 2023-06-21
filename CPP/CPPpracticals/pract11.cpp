#include<iostream>
#include<string>
using namespace std;
class employee{
      
      private:
       string address;
       
      public:
       int age;
       string name;
       void getdata(){
         cout<<"\n\n\n\n\n\n\nEnter Name : ";
         getline(cin,name);
         cout<<"Enter Address: ";
         getline(cin,address);
         cout<<"Enter Age : ";
         cin>>age;
         cout<<"-------------------------------------------------"<<endl;
        
       }   
       void showdata(){
       cout<<"Name : "<<name<<endl;
       cout<<"Age : "<<age<<endl;
       cout<<"Address : "<<address;
       }
};
// void employee::setdata(){
//         cout<<"Enter Name : ";
//         getline(cin,name);
//         cout<<"Enter Age : ";
//         cin>>age;
//         cout<<"Enter Addrerss: ";
//         getline(cin,address);
//}
int main(){
    employee data;
    data.getdata();
    data.showdata();
    
}