#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter Size of Your array: ";
	cin>>size;
	int array[size];
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Enter Number @ index: "<<i<<" : ";
		cin>>array[size];
	}
	int smallest=array[0];
	int i1=0,i2=0,i3=0;
	for(int i=0; i<size; i++)
	{
		
		if(smallest>array[i])
		{
			i1=array[i];
			if(i1>array[i])
			{
				i2=array[i];
				if(i2>array[i])
				i3=array[i];
			}
		}
	}
	cout<<"Largest three Elements are: "<<i1<<" : "<<i2<<" : "<<i3<<" : ";
	return 0;
}
