#include<iostream>
#include<conio.h>

using namespace std;

class Market{
	private:
		string marketname;
		int shops;
		public:
				void MarketName()
				{
					cout<<"Enter Market Name: ";
					getline(cin,marketname);
				}
				void Shops()
				{
					cout<<"Enter No.of Shops: ";
					cin>>shops;
				}
		void Display(Market P)  // Here our object comes and stored in P object 
		{
			cout<<"\nMarket Name is: "<<marketname;
			cout<<"\nShops Available in Market: "<<shops;
		}
		
};

int main()
{
	Market M1;

	M1.MarketName();
	M1.Shops();
	M1.Display(M1);		//Passing Objet as function argument.
}
