//3. Implement a function that swaps the values of two integers using pointers.

#include<iostream>
using namespace std;

void Swapping(int *ptr1, int *ptr2)
{
	int *temp;
	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;
	cout<<"Numbers after  swapping are: ( "<<*ptr1<<" : "<<*ptr2<<" )"<<endl;
}
int main()
{
	int num1=4;
	int num2=5;
	cout<<"Numbers before swapping are: ( "<<num1<<" : "<<num2<<" )"<<endl;
	Swapping(&num1,&num2);
	return 0;
}
	
