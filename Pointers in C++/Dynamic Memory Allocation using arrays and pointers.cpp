#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	
	int *A= new int[size];		//new--> Keyword that allocates the size of an array gives on run time by user.
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter Number A["<<i<<"] ";
		cin>>A[i];
	}
	
	cout<<"Numbers are: ";
	for(int i=0; i<size ; i++)
		cout<<*(A+i)<<" ";      //Or we can use as a A[i] same as *(A+i);
	
	delete[]A;
//	A = nullptr;  --->Doesn't Work
//	A= Null;	----> Doesn't Work as this keyword is for c++ 11+ versions.

	A=0; // ----> Same functionality do as Null and nullptr keywords 
	
	return 0;	
}

