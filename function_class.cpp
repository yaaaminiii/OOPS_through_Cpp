#include<iostream>
using namespace std;
class A{
	private:
	int val;
	public:
		//constructor 
	A(int x){
		val=x;
	}
	friend class B;
};
class B{
	public:
	void display(A a){
		cout<<a.val<<endl;
	}
};
int main()
{
	A a1(30);
	B b;
    b.display(a1);
}
