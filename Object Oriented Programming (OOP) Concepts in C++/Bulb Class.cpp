#include<iostream>
using namespace std;

class Bulb{
	private:
	string bulbtype;
	int  bulbwatts;
	public:
		void bulbdata(string type, int watts)
		{
			cout<<"Enter Bulb Type (Solar, Light): ";
			getline(cin,bulbtype);
			cout<<"Enter no.of watts on which Bulb consists: ";
			cin>>bulbwatts;
		}
		void displaydata()
		{
			cout<<"\n\nData....."<<endl;
			cout<<"Bulb is of "<<bulbtype<<" Type.\n";
			cout<<"Bulb is consists of "<<bulbwatts<<" watts.";
		}
};

int main()
{
	Bulb B;
	string p;
	int q;
	B.bulbdata(p,q);
	B.displaydata();
	return 0;
}

