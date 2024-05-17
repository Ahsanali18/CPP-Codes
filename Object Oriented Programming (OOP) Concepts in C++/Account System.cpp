#include<iostream>
using namespace std;

class BankAccount{
	private:
	static int accounts;
	string name;
	int amount;
	public:
			string acounter()
			{
				cout<<"Enter Your name: ";
				getline(cin,name);	
			}
			int depositSystem()
			{
				cout<<"How much Amount You want to deposit: ";
				cin>>amount;
				return amount;	
			}
			int withdrawSystem()
			{
				cout<<"How much Amount You want to withdraw from Your account: ";
				cin>>amount;
				return amount;
			}
			BankAccount() 
			{
				accounts++;
			}
};
int BankAccount::accounts=0;

int main()
{
	BankAccount  A1,A2;
	string name;
	int amount;
	A1.acounter();
	A1.depositSystem();
	A1.withdrawSystem();
	
	A2.acounter();
	A2.depositSystem();
	A2.withdrawSystem();
}
