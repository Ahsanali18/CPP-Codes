#include<iostream>
using namespace std;
void sum(int num1,int num2)
{
	int sum;
	sum=num1+num2;
	cout<<"Sum= "<<sum;
}
void difference(int num1,int num2)
{
	int difference;
	difference=num1-num2;
	cout<<"Difference= "<<difference;
}
void product(int num1,int num2)
{
	int product;
	product=num1*num2;
	cout<<"Product= "<<product;
}
void division(float num1,float num2)
{
	float division;
	division=(num1/num2);
	cout<<"Division= "<<division;
}
int main()
{
	cout<<"You Have Four attempts to Perform the Operations:\n";
	int num,a,b,count=0;
	for(int i=1; i<=4; i++)
	{
		cout<<"\nEnter 1 For Sum:\n";
		cout<<"Enter 2 For Difference:\n";
		cout<<"Enter 3 For Product:\n";
		cout<<"Enter 4 For Division:\n";
		cin>>num;
		if(num==1)
		{
			cout<<"\nEnter 1st Number: ";
			cin>>a;
			cout<<"Enter 2nd Number: ";
			cin>>b;
			sum(a,b);
		}
		else if(num==2)
		{
			cout<<"\nEnter 1st Number: ";
			cin>>a;
			cout<<"Enter 2nd Number: ";
			cin>>b;
			difference(a,b);
		}
		else if(num==3)
		{
			cout<<"\nEnter 1st Number: ";
			cin>>a;
			cout<<"Enter 2nd Number: ";
			cin>>b;
			product(a,b);
		}
		else if(num==4)
		{
			cout<<"\nEnter 1st Number: ";
			cin>>a;
			cout<<"Enter 2nd Number: ";
			cin>>b;
			division(a,b);
		}
		else 
		cout<<"\nEnter valid Number mentioned above.";
		count++;
		if(count==4)
		{
			cout<<"\nYour Attempts has been completed Sucessfully....!!!!!!: ";
			}	
	}
	return 0;
}
