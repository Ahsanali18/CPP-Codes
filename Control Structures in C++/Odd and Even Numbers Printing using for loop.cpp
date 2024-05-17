#include<iostream>
using namespace std;
int main()
{
	cout<<"Odd\t\tEven"<<endl;
	for(int a=1; a<=20; a++)
	{
		cout<<a;
		a++;
		cout<<"\t\t"<<a<<endl;
	}
	return 0;
}
