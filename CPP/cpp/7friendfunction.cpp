/*A friend function is a non member function that has been granted access
to the private and protected members of a class
it is done using "friend" keyword !*/

#include<iostream>
#include<string>
using namespace std;
class xxx{
      protected:
        int id=33;
      
      public:
        string name="lokesh";
        string address="una";
        friend void print(xxx);
        
};
void print(xxx ob){
    cout<<"Name is : "<<ob.name<<endl;
    cout<<"address is : "<<ob.address<<endl;
    cout<<"Id is : "<<ob.id;
}
int main(){
    xxx ob;
    print(ob);
    return 0;
}