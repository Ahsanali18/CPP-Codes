#include<iostream>
using namespace std;

void myfunction(int num1, int num2)
{
	cout<<"Numbers are: "<<num1<<" : "<<num2;
	cout<<" Addition is= "<<num1+num2;
}

void myfunction(int num1, int num2, int num3)
{
	cout<<"Numbers are: "<<num1<<" : "<<num2<<" : "<<num3;
	cout<<"Addition is= "<<num1+num2+num3;
}

int main()
{
	int number1, number2;
	cout<<"Enter Numbers: ";
	cin>>number1>>number2;
	
	myfunction(number1, number2);
//	myfunction(number1, number2,3);
	return 0;  
}
