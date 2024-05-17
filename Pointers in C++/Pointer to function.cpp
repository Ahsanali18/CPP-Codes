#include<iostream>
using namespace std;

void PassP(int *, int *);	//Function Declaration 

int main()
{
	int a, b;
	int *p, *q;
	cout<<"Enter Numbers: ";
	cin>>a>>b;
	p=&a;
	q=&b;
	PassP(p, q);
	
	return 0;
}

void PassP(int *p, int *q)			//Function Definitionn
{
	cout<<"Addition is: "<<(*p + *q);
}
