#include <iostream>
using namespace std;

class P15 {
private:
    int n;

public:
    void getNum(int x)
    {
        n = x;
    }
    
    void dispNum(void)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNumber is : " << n;
    }

    P15 operator+(P15& obj)
    {
        P15 x; 
        x.n = this ->n + obj.n;
        return (x);
    }
};

int main()
{
    P15 num1, num2, sum;
    num1.getNum(50);
    num2.getNum(40);
    
    sum = num1 + num2;

    sum.dispNum();
    cout << endl;

    return 0;
}
