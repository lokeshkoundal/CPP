/* 
Case 1:
class B:public A{
    //order of execution will be = 1-A() , 2-B()
}

case 2:
class A:public B,public C{
    //order = 1-B()  ,2-C() , 3-A()
}

case 3:
class A:public B,virtual public C{
    //order = C-B-A
}

*/

//here is an example of parametarized constructors in base and derived class is multiple inheritance : 

#include<iostream>
using namespace std;
class base1{
    int data1;
      public:
      base1(int i){
        data1=i;
        cout<<"This is base class 1 !! and value of data 1 is = "<<data1<<endl;
      }

};
class base2{
    
    int data2;
    public:
    base2(int i){
    data2=i;
    cout<<"This is base class 2 !! and the value of data 2 is = "<<data2<<endl;
    }
};
class derived:public base1,public base2{
   
       public:
       derived(int a,int b):base1(a),base2(b){
        cout<<"this is derived class !!"<<endl;
     }
       
};
int main(){
    derived obj(5,10);
    
    return 0;
}