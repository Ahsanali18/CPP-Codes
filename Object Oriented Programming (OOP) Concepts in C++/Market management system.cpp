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
		void Display(Market &M)
		{
			cout<<"\nMarket Name is: "<<M.marketname;
			cout<<"\nShops Available in Market: "<<M.shops;
		}
		
};

int main()
{
	Market M1, M2;

	M1.MarketName();
	M1.Shops();
	M2.Display(M1);
}
