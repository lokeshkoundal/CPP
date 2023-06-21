// function templates
#include <iostream>
using namespace std;

template <class lokesh>
int swap_numbers(lokesh& x, lokesh& y)
{
	lokesh t;
	t = x;
	x = y;
	y = t;

}

int main()
{
	int a, b;
	a = 10, b = 20;
    cout<<"Before swapping -- a = "<<a<<" and b = "<<b<<endl;
	swap_numbers(a, b);
	cout<<"After swapping -- a = "<<a<<" and b = "<<b<<endl<<endl;
	return 0;
}
