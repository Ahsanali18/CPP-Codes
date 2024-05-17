#include<iostream>
using namespace std;
int main()
{
	int m1[2][2]={{1,2},{2,3}};
	int m2[2][2]={{2,2},{3,3}};
	int m3[2][2];
	
	cout<<"[";
	for(int i=0; i<2; i++)
	{
		int a=0;
		m3[a][i]=m1[a][i]+m2[a][i];
		cout<<m3[a][i]<<" ";
	}
	cout<<"]\n[";
	for(int j=0; j<2; j++)
	{
		int a=1;
		m3[a][j]=m1[a][j]+m2[a][j];
		cout<<m3[a][j]<<" ";
	}
	cout<<"]";
	return 0;
}
