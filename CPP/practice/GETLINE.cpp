#include<iostream>
#include<string>
using namespace std;

int main(){
    char a[20];
    string c;
    string d;
    cout<<"enter ur name a: "<<endl;
    cin>>a;
    cout<<"your name is: "<<a<<endl;
    cout<<"enter ur name c: "<<endl;
    getline(cin,c);
    cout<<"your name is: "<<c<<endl;
    cout<<"enter ur name d: "<<endl;
    getline(cin,d);
    cout<<"your name is: "<<d;


    return 0;
}
