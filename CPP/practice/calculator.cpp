#include <iostream>  
using namespace std;  
int main()  {
int a,b,op;
cout<<"choose operation to perform \n 1:add \n 2:subtract \n 3:multiply \n 4:divide\n:";
cin>>op;
cout<<"enter first number: "<<endl;
cin>>a;
cout<<"enter second number: "<<endl;
cin>>b;
switch(op){
        case 1:
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;

        case 2:
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;

        case 3:
        cout<<a<<" x "<<b<<" = "<<a*b;
        break;

        case 4:
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;

        default:
        cout<<"ABE LAWDE GALAT INPUT MAT DE";

}
return 0;
}


