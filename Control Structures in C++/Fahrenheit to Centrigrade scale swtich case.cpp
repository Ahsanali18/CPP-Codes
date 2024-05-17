/* Write a c++ program that converts celsius to fahrenheit and vice versa using switch structure?
if user press 1 then conversion from Fahrenheit to celsius
if user press 1 then conversion from Fahrenheit to celsius
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main(){
		
		float tempratureInF, tempratureInC;
		int choice;
		cout<<"Enter 1 for Fahrenheit to Celsius: "<<endl;
		cout<<"Enter 2 for Celsius to Fahrenheit : ";
		cin>>choice;
		
		switch(choice)
		{
		case 1: {
			cout<<"Enter Temp in Fahrenheit: ";
			cin>>tempratureInF;
			tempratureInC=(tempratureInF-32)/(1.8);
			cout<<"Equivalent Temperature in Celsius is: "<<tempratureInC;		
			break;	
			}
		case 2: {
			cout<<"Enter Temp in celsius: ";
			cin>>tempratureInC;
			tempratureInF=((1.8*tempratureInC)+32);
			cout<<"Equivalent Temperature in Fahrenheit is: "<<tempratureInF;		
			break;
		}
		default: {
			cout<<"Invalid Input please put 1 & 2 for conversion";
			break;
		}

	return 0;
	}
}
