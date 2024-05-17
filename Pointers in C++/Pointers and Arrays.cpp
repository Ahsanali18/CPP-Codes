#include<iostream>
using namespace std;
int main()
{
	int A[4]={1,2,3,4};
	int *p=A;
	cout<<*p<<endl;
	cout<<*(p++);
	
}
