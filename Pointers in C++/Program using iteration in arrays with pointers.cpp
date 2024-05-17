//4. Write a program that demonstrates the use of pointer arithmetic to iterate through an array.

#include<iostream>
using namespace std;
int main()
{
	int My_Numbers[6];
	
	for(int i=0; i<6; i++)
	{
		cout<<"Enter Number @ index: ("<<i<<") :";
		cin>>My_Numbers[i];
	}
	cout<<endl;
	for(int i=0; i<6; i++)
	{
		cout<<"Number @ index: ("<<i<<") :"<<*(My_Numbers+i)<<endl;
	}
}
