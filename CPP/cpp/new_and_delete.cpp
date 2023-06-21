#include <iostream>
using namespace std;
int main()
 {
   int i;
   cout<<"Enter the size of the array  : " ;
   cin>>i;
    float* pie = new float[i];
    for(int j=0;j<=i;j++){
      cout<<"Enter "<<j+1<<" number : "<<endl;
      cin>>pie[j];
    }

    for(int j=0;j<=i;j++){
      cout<<"The value of "<<j+1<<" is : "<<pie[j]<<endl;

    }















//    int *p = new int[10];
//    for (int i = 0; i < 10; i++)
//    {
//       cout << "Enter a number : ";
//       cin >> p[i];
//    }
//    for (int i = 0; i < 10; i++)
//    {
//       cout << "number " << i + 1 << " is : " << p[i] << endl;
//       // delete p;
//    }

   return 0;
}