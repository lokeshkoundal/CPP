#include<iostream>
using namespace std;
class hi{
public:
int a,b;
void set(){
    cin>>a>>b;
}
void get();

};
void hi::get(){
    cout<<"VAlue of A is :"<<a;
    cout<<"VAlue of A is :"<<b;
}
int main(){
hi obj[5];
obj[1].set();
obj[1].get();

}