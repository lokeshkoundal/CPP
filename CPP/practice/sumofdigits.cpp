#include <iostream>
using namespace std;
int main()

{   int n, sum = 0, m,sumodd=0,sumeven=0;
    cout << "Enter a number: ";
    cin >> n; //for 15
    while (n > 0)
        {
            m = n % 10;
            if(m%2==0){
            sumeven = sumeven + m; 
            n = n / 10;
            }
            else{
                m = n % 10; 
            sumodd = sumodd + m;
            n = n / 10; 
            }
        }
    cout << "Sum even is= " << sumeven << endl;
     cout << "Sum odd is= " << sumodd << endl;
    return 0;
}