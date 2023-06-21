#include<iostream>
using namespace std;
 class counter
 {
     private:
         static int count;
     public:
        
     
         static void display()
         {
             cout<<"Object count is  "<<count<<endl;
         }
         counter(){
            count++;
         }

 };
 int counter::count=0;
 int main()
 {
     //cout<<"\n\n\n\n\n\n\n";
     counter c1;
     c1.display();
     counter c2;
     c2.display();
     counter c3;
     c3.display();
     return 0;
 }