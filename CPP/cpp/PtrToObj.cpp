#include<iostream>
using namespace std;
class base{
        private:
         int a=5,b;
        public:
         int print(){
            //cout<<"The value of a is : ";
            return a+5;
         }
    
};
class derived:public base{
        private:
         int x=5;
        public:
        void print(){
            cout<<"The value of x is : "<<x;
        }

};
int main(){
base* bptr;
base baseo;
derived* dptr;
derived obj;
bptr=&obj;
cout<<bptr->print();
//bptr->print();

return 0;

}