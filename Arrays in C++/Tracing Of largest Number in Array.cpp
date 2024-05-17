#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of Your Array: ";
	cin>>size;
	int My_array[size];
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter Element @ index "<<i<<" : ";
		cin>>My_array[i];
		}
	int largest=My_array[0];	
	for(int i=0; i<size;i++)
	{
		if(My_array[i]>largest)
		{
			largest=My_array[i];
		}
	}
	cout<<"Largest Element in your array is: "<<largest;

	}
