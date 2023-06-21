#include<iostream>
using namespace std;
class weight{
    private:
          int my_weight=60;
          friend void myfriend(weight);
          

};
void myfriend(weight ob){
    cout<<"\nMy friend knows my weight is : "<<ob.my_weight<<endl<<endl;
}

int main(){

    weight obj;
    myfriend(obj);

return 0;
}