#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int fact=1;
//	if(num!=0 && num>0 && num<10 && num>4 && num<8)
//	{
		for(int x=num; x>=1; --x)
		{
			fact=fact*x;
		}
		cout<<num<<"!=" <<fact;
//	}
	//else cout<<"Invalid Input";
	return 0;
}
