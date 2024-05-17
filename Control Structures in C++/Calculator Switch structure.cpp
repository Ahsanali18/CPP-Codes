/* Write a c++ program that inputs two floating point number and an operator (+,-,*,/). It displays error message if divisor is equals to zero like 25/0 using switch 
structure?*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
			float num1, num2;
			char op;
			
			cout<<"Enter 1st Number: ";
			cin>>num1;
			cout<<"Enter operator as (+,-,*,/) ";
			cin>>op;
			cout<<"Enter 2nd Number: ";
			cin>>num2;
			
			switch(op){
			case '+': 
			{
			cout<<"Addition= "<<num1+num2; break;
		}
			case '-':
				{
					cout<<"Subtraction= "<<num1-num2;  break;
				}
			case '*':
			{
				cout<<"Multiplication= "<<num1*num2; break;
			}
			case '/':
			{
					if(num2==0)
					{
						cout<<"Error Divisible By zero doest not occur";
					}
					else
						{
							cout<<"Division= "<<num1/num2; 
			}
			 break;
			
		}
			default : 
			{
				cout<<"Enter operator as (+,-,/,*)";
			}
		}
	}
