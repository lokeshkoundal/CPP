#include<iostream>
using namespace std;
class base1{
    private:
      int x;
    public:
     void greet(){
           cout<<"Base 1 greet --Hello ";
     }
};
class base2{
    private:
      int a;
    public:
     void greet(){
        cout<<"Base 2 greet --Hii ";

     }
};
class derived:public base1,public base2{
         int y;
         public:
          void greet(){
            base1::greet();    //selecting konsi base class ka function run hoga!--ambiguity resolution!
          }                    // derived class's function i is prioritized over base class's func!
                               //when function name is same!

};
int main(){
derived obj;
obj.greet();


return 0;
}