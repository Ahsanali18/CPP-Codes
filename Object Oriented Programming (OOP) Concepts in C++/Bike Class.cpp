#include<iostream>
using namespace std;

class Bike{										//Class With Name Bike is declared.
	private:									//Acess Specifier private is declared to store the attributes/data-members of the car.
	string name, numberplate, color;
	int speed, noofwheels;
	public:										//Acess Specifier public is declared to store the methods/member-functions of the car.
		Bike(string na, string numplate, string col)	//Constructor used to initialize the values to the private data items.
		{
			name=na;
			numberplate=numplate;
			color=col;
		}
		Bike(int sp, int wheels)
		{
			speed=sp;
			noofwheels=wheels;
		}

		void inputdetails();		
		void displayBike();
};
		void Bike::inputdetails()
		{
			cout<<"Enter Bike name: ";
			getline(cin,name);
			cout<<"Enter Number Plate of Bike: ";
			cin.ignore();
			getline(cin,numberplate);
			cout<<"Enter Bike color: ";
			cin.ignore();
			getline(cin,color);
			cout<<"Enter Bike Speed: ";
			cin>>speed;
			cout<<"Enter Bike's wheels: ";
			cin>>noofwheels;
		}
		
		void Bike::displayBike()
		{
			cout<<"Bike Name is: "<<name<<endl;
			cout<<"Bike Number plate is: "<<numberplate<<endl;
			cout<<"Bike Color is: "<<color<<endl;
			cout<<"Bike Speed is: "<<speed<<endl;
			cout<<"Bike consists of: "<<noofwheels<<" wheels.";			
		}
int main()
{
	string name, numberplate, color;
	Bike B(name,numberplate,color);
	B.inputdetails();
	B.displayBike();
	return 0;
	
}
