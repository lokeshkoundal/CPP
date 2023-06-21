// use of  constructors  in multiple inheritance
#include<iostream>
using namespace std;
class parent1
{
public:
int a=1;
parent1()
{
	cout << "\n\nConstructor of the base class Parent 1 --- a = "<<a<<endl;
}

};

class parent2
{
public:
int b=2;
parent2()
{
	cout << "Constructor of the base class Parent 2 --- b = "<<b<<endl;
}

};

class child: public parent1, public parent2
{
public:
child()
{
	cout << "Constructor of the derived class Child --- a = "<<a<<" and "<<"b = "<<b<<endl<<endl;
}
};

int main()
{
child obj;
return 0;
}