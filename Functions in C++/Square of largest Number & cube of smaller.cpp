/* Create a function named CheckData, that will take two arguments both of type int. 
	the function then finds the largest and smallest number.
	the function then prints the table of largest number and square of smallest number.
	 function first check that both  numbers are not equal.
	 
	 */
	 
	 
	 
#include<iostream>
using namespace std;

void CheckData(int num1, int num2)
{
	if(num1!=num2)
	{
		if(num1>num2)
		{
			cout<<"Table of Largest Number is: ";
			for(int i=1; i<=10; i++)
			{
				cout<<num1<<"*"<<i<<"= "<<num1*i;
				cout<<endl;
			}

		}
		else if (num1<num2)
			{
				cout<<endl<<"Square of smallest number= "<<num1*num1;
			}
		if(num2>num1)
		{
			cout<<endl<<"Table of Largest Number is: ";
			for(int j=1; j<=10; j++)
			{
				cout<<num2<<"*"<<j<<"= "<<num2*j<<endl;
			}
		}
		else if(num2<num1)
			{
				cout<<endl<<"Square of smallest number= "<<num2*num2;
			}
}
		else
			{
				cout<<endl<<"Enter Different Numbers: ";
			} 
			
}

int main()
{
	int n1,n2;
	cout<<"Enter 1st number: ";
	cin>>n1;
	
	cout<<"Enter 2nd Number: ";
	cin>>n2;
	
	CheckData(n1,n2);
}

