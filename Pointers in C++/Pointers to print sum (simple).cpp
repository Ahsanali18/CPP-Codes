#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=4, b=3;
	int *ptr1=&a;
	int *ptr2=&b;
	int c;
	c=(*ptr1)+(*ptr2);
	cout<<"Sum of Numbers is: "<<c;
	
	return 0;
}
