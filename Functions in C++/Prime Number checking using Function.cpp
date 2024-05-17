#include<iostream>
using namespace std;

void Isprime(int);

int main(){
	
	int a;
	cout<<"Enter Any Number: ";
	cin>>a;
	Isprime(a);
}

void Isprime(int num)
{
	int count=0; 
	for(int i=1; i<=num; i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	cout<<"Its Prime ";
	else
	cout<<"Its Not prime";
}
