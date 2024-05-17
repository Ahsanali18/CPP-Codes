#include<iostream>	//This is the header file used for objects input and output streams
#include<conio.h>	//This is the header file used for clrscr() and getch() functions.
#include<cmath>		//This is the header file used for mathematical calculation including pow(), cube() functions
#include<unistd.h>	//This is the header file used for sleep() function
#include<iomanip>	//This is the header file used for setw() manupilator
#include<string>

using namespace std;

								//Declaration of class
class Medical_store{
	
	private:
	string storename;
	string nameofboss;
	int noofmedicines;
	char modelofmedicines;
	public:
				void displaydesign()
				{
					cout<<"\t\t\t*************Welcome___To___My___Store***************";
				}
				void setstorename(string s)
				{
					
					cout<<"\nEnter Store name:";
					cin>>s;
					storename=s;
				}
				string getstorename()
				{
					return storename;
				}
				
				void setBossname(string boss)
				{
					cout<<"Enter Manager name:";
					cin>>boss;
					nameofboss=boss;
				}
				string getBossname()
				{
					return nameofboss;
				}
				void setMedicines(int totalmedicines)
				{
					cout<<"Enter No.of.Medicines: ";
					cin>>totalmedicines;
					noofmedicines=totalmedicines;
				}
				int getMedicines()
				{
					return noofmedicines;
				}
				void setMedicineModel(char M)
				{
					cout<<"Enter Medicines Model: ";
					cin>>M;
					modelofmedicines=M;
				}
				char getMedicineModel()
				{
					return modelofmedicines;
				}
};
int main()
{
	
	Medical_store  S1;
	string storename,bossName;
	int medicines;
	char model;
	S1.displaydesign();
	S1.setstorename(storename);
	S1.setBossname(bossName);
	S1.setMedicines(medicines);
	S1.setMedicineModel(model);
	
	
	cout<<"\nStore Name is: "<<S1.getstorename();
	
	cout<<"\nStore Manager name is: "<<S1.getBossname();
	
	cout<<"\nMedicines in Store: "<<S1.getMedicines();
	
	cout<<"\nMedicines Models are: "<<"'"<<S1.getMedicineModel()<<"'";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t**********THE___END**************";	
}




