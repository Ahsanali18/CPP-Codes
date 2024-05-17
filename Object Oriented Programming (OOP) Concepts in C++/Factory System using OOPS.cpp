#include<iostream>
using namespace std;

class Factory{
	private:
	static int numberOfEmployeeWorks;
	string nameOfFactory;	
	string employeeName;
	string password;
	long long salaryOfEmployee;
	char identificationOfEmployee;
	
	public:
		
		void setPassword(string pass)
		{
			password=pass;
		}
		
		Factory(string name, char identification)
		{
			employeeName=name;
			identificationOfEmployee=identification;		
		}
		
		Factory ()
		{
			numberOfEmployeeWorks++;
		}
		
		void Factory_Details(string name)
		{
			nameOfFactory=name;
			cout<<"\nName of Factory is: "<<nameOfFactory;
//			cout<<"\nNumber of Employees works: "<<employeework;	
		}
		void Employee_Details()
		{
			cout<<"Name Of Employee ";
		}
		
		void identification()
		{
			cout<<"Identifications Of Employees is: "<<identificationOfEmployee;
			}
			
};

int Factory::numberOfEmployeeWorks=0;

int main()
{
	Factory  E1=Factory("Ahmed",'A');
	Factory  E2=Factory("Ismail",'I');
	Factory  E3=Factory("Zubair",'Z');
	
	E1.Factory_Details("ABC");
	cout<<E1.Employee_Details()<<" is "<<E1.Factory();
	cout<<E2.Employee_Details()<<" is "<<E2.Factory();
	cout<<E2.Employee_Details()<<" is "<<E2.Factory();
	
	return 0;
}
