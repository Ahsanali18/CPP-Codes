#include<iostream>
using namespace std;

int factorialreturn(int num)
{
	int fact=1;
	for(int i=num; num>=1; num--)
	{
		fact=fact*num;
	}
	cout<<"Factorial of Number is: ";
	return fact;
}

int main()
{
	int num,returned;
	cout<<"Enter a Number: ";
	cin>>num;
	returned=factorialreturn(num);					// Another way of Returning-->cout<<factorialreturn(num)
	cout<<returned;
															
}
