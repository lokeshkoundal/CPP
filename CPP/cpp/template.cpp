#include<iostream>
using namespace std;
template<class x,class y>
x mul(x a,y b){
     return a*b;
}
template<class x,class y>
y mul(x b,y a){
      return b*a;
}
int main(){
    cout<<mul(5,5.6)<<endl;
    cout<<sub(5,10.6)<<endl;
    cout<<mul('a',3);

    return 0;
}
