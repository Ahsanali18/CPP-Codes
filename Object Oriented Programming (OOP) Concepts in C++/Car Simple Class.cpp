#include<iostream>
using namespace std;

class Car{
	private:
	string color;
	long year;
	public:
		void in()
		{
			cout<<"Enter Color: ";
			getline(cin,color);
			cout<<"Enter Year: ";
			cin>>year;
			cin.ignore();
		}
		
		long getyear()
		{
			return year;
		}
		
		void out()
		{
			
			cout<<"\n\nCar Color is "<<color<<endl;
			cout<<"Car year is "<<year;
		}
};

int main()
{
	Car C1, C2;
	C1.in();
	C2.in();
	long y1,y2;
	y1=C1.getyear();
	y2=C2.getyear();
	if(y1>y2)
	C1.out();
	else 
	C2.out();
	return 0;
}
