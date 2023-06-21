#include <iostream>
using namespace std;
int main()
{ 
float x,y;
cout<<"enter the value of x : ";
cin>>x;
cout<<"enter the value of y : ";
cin>>y;

if(x>0&&y>0){
cout<<"1st Quadrant";
}
else if(x<0&&y>0){
    cout<<"2nd Quadrant";
}
else if(x<0&&y<0){
    cout<<"3rdd Quadrant";
}
else if(x<0&&y>0){
    cout<<"4th Quadrant";
}
else if(x>0||y<0&&y==0){
    cout<<"X axis";
}
else if(x==0&&y>0||y<0){
    cout<<"y axis";
}
else if(x==0&&y==0){
    cout<<"origin";
}

    return 0;
}