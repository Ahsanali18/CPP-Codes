#include<iostream>
using namespace std;
int main()
{
	int M1[2][2]={{1,2},{2,3}};
	int M2[2][2]={{3,2},{1,2}};
	int M3[2][2];
	
	cout<<"[";
	for(int i=0; i<2; i++)
	{
		cout<<M1[i][i];
	}
}
