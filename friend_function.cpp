#include<iostream>
using namespace std;
class bankaccount{
	private:
		int balance;
	public:
	  bankaccount(int b){
	  	balance=b;
	  }
	//friend function:my_frd can access private balance	
	friend void my_frd(bankaccount acc);
};
 //friend function is not a member of the class but it can access private and public members
void my_frd(bankaccount acc){
	cout<<acc.balance<<endl;
}
int main(){
	bankaccount user(50000);
	my_frd(user);
}
