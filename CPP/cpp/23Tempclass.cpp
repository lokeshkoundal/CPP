//take 2 from user length(int),breath(float)
#include<iostream>
using namespace std;
template<class dt,class dt2>
class hi{
   private:
    dt length;
    dt2 breadth;
   public:
    hi(dt a,dt2 b){
        length=a;
        breadth=b;
    }
    dt area(){
       return length*breadth;
    } 

};
int main(){
    hi<int,float>obj(5,6.5);
    cout<<obj.area();
    return 0;
}