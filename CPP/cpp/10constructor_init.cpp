#include<iostream>
using namespace std;
class hi{
      private:
      int x,y;
      public:
      hi(int a,int b):x(a),y(a+5){ //x=a and y=b --we can initialize like this in construtors
      int d=5;
        cout<<"The sum of x and y is : "<<x+y;

      }
};
int main(){
    hi obj(5,4);
    int c=5;

}