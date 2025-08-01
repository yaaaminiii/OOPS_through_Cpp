#include<iostream>
using namespace std;
//Create two classes ClassA and ClassB, each having a private integer member. 
//Write a friend function that calculates and returns the sum of the private members of both classes.
class B;//forward declaration
class A{
	private:
		int x;
	public:
		A(int a)
		{
			x=a;
		}
	friend int add(A a,B b);//friend function declaration
};
class B{
	private:
		int y=20;
	public:
		B(int b)
		{
			y=b;
		}
	friend int add(A a,B b);
};
int add(A a,B b) //friend function defination
{
return a.x+b.y;
}
int main()
{  A x(10);
   B y(20);
	cout<<add(x,y)<<endl;
}
