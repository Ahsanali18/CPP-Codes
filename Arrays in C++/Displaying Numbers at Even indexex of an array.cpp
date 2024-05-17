#include<iostream>
using namespace std;
int main()
{
	int A[5]={2,5,8,12,9};
	
	for(int i=0; i<=4; i++)
	{
		if(i%2==0)
		{
		cout<<"Number @ index : "<<i<<" is "<<A[i]<<endl;
		}
	}
	return 0;
}
