#include<iostream>
using namespace std;


void Even_Odd_Series(int j)
{

	if(j<=30)
	{
		cout<<j<<"\t\t"<<j+1<<endl;
		Even_Odd_Series(j+2);
	}
}
int main()
{
	cout<<"Odd\t\tEven"<<endl;
	Even_Odd_Series(1);
	return 0;
}
