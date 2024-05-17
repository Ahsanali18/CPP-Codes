#include<iostream>
using namespace std;

void myarray(int array[], int size){
	
	cout<<"Enter size of an array: ";
	cin>>size;
	for(int i=0; i<size;i++)
	{
	cout<<"Enter Number @ "<<i<<" index ";
	cin>>array[i];
	}
}

int main()
{
	int A1[100], a;
	myarray(A1,a);
}


