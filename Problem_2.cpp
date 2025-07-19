#include<iostream>
using namespace std;
class Bankaccount{
	private:
		float balance;
		int Accountnumber;
	public:
		string holdername;
	Bankaccount(float b,int A,string h)
	{
		balance=b;
		Accountnumber=A;
		holdername=h;
	}
	void deposit(float amount)
	{
		balance=balance+amount;
		cout<<"deposited"<<amount<<endl;
	}
	void withdraw(float amount)
	{
		balance=balance-amount;
		cout<<"withdraw"<<amount<<endl;
	}	
	void checkBalance(){
    cout << "Current Balance: " << balance << endl;
}
};
int main()
{
	Bankaccount account(2500,12345678,"yamini");
	cout << "Account Holder: " << account.holdername << endl;
	account.deposit(2500);
	account.withdraw(50);
	account.checkBalance();

}
