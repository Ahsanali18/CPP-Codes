/*6. Create a program with a function that receives an array and its size as parameters,
then prints the elements using pointers.*/

#include<iostream>
using namespace std;

void Print_Numbers(int Array[], int size)
{
	int *ptr=Array;
	cout<<"Numbers in array using function with pointers are: ";
	for(int i=0; i<size; i++)
	cout<<*(ptr+i)<<"  ";
}

int main()
{
	int A[5]={23,-45,12,90, 77};
	Print_Numbers(A,5);
	
	return 0;
}

