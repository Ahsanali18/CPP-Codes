#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of your array: ";
	cin>>size;
	int checkSmall[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter Element @ index: "<<i<<" : ";
		cin>>checkSmall[i];
	}
	int smallElement=checkSmall[0];
	for(int i=0; i<size; i++)
	{
		if(smallElement>checkSmall[i])
		{
			smallElement=checkSmall[i];
		}
	}
	cout<<"Smallest Element in Your array is: "<<smallElement;
	return 0;
}
