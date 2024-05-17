#include<iostream>
using namespace std;

int roll_no, total_marks, age;
char grade;
float cgpa;
string name;

void input()
{
	cout<<"Enter Roll number: ";
	cin>>roll_no;
	cin.ignore();
	cout<<"Enter Name: ";
	getline(cin,name);
	cout<<"Enter Age: ";
	cin>>age;
	cout<<"Enter Total Marks: ";
	cin>>total_marks;
	cout<<"Enter Grade: ";
	cin>>grade;
	cout<<"Enter cgpa: ";
	cin>>cgpa;
}

void Display()
{
	cout<<"The Roll number of the student is: "<<roll_no<<endl;
	int *roll_nop=&roll_no;
	cout<<"The adress of Roll Number variable in Ram is: "<<roll_nop<<endl;
	
	cout<<"The Name of the student is: "<<name<<endl;
	string *namep=&name;
	cout<<"The adress of Name variable in Ram is: "<<namep<<endl;
	
	cout<<"The age of the student is: "<<age<<endl;
	int *agep=&age;
	cout<<"The adress of age variable in Ram is: "<<agep<<endl;
	
	cout<<"The Marks of the student are: "<<total_marks<<endl;
	int *marks=&total_marks;
	cout<<"The adress of marks variable in Ram is: "<<marks<<endl;
	
	cout<<"The Grade of the student is: "<<grade<<endl;
	char *gr=&grade;
	cout<<"The adress of grade variable in Ram is: "<<gr<<endl;
	
	cout<<"The C.G.P.A of student is: "<<cgpa<<endl;
	float *gp=&cgpa;
	cout<<"The adress of C.G.P.A in Ram is: "<<gp<<endl;
	
	
	
}

int main()
{
	input();
	Display();	
	return 0;
	
}
