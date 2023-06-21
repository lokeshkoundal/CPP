#include<iostream>
using namespace std;
class complex{
      public:
      int a,b,x,y;
    void setvalue(){
        
        cout<<"\n\n\n\n\nEnter the real part of expression 1 : ";
        cin>>a;
        cout<<"Enter the imaginary part of expression 1 : ";
        cin>>b;
        cout<<"Enter the real part of expression 2 : ";
        cin>>x;
        cout<<"Enter the imaginary part of expression 2 : ";
        cin>>y;
        cout<<"-----------------------------------------------"<<endl;

    }

    void getvalue(){
        cout<<"expression 1 is : "<<a<<" + "<<b<<"i"<<endl; 
        cout<<"expression 2 is : "<<x<<" + "<<y<<"i"<<endl;  
        cout<<"-----------------------------------------------"<<endl;
    }

    void add(){
          int ax=a+x;
          int by=b+y;
          cout<<"addition of both expressions is : "<<ax<<" + "<<by<<"i"<<endl;
          cout<<"             ----------------             "<<endl;;

    }

    void sub(){
        int xa=a-x;
        int yb=b-y;
        cout<<"subtraction of both expressions is : "<<xa<<" + "<<yb<<"i";
    }
    
};

int main(){
  complex obj;
  obj.setvalue();
  obj.getvalue();
  obj.add();
  obj.sub();

    return 0;
}