#include<iostream>
using namespace std;
int main()
{
	int num, count=0;
	cout<<"Enter any Number: ";
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		if(num%i==0)
		{
		count++;
	}
}
		if(count==2)
		cout<<"Its Prime: ";
		else 
		cout<<"Its consonant: ";

	return 0;
}
