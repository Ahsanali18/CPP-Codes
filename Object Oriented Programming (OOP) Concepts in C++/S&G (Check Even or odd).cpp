#include<iostream>
using namespace std;

class Even_Odd{
	private:
	int number;
	public:
	
		void setnumber(int num)
		{
			number=num;
		}
		int getnumber()
		{
			return number;
		}
		int condition()
		{
			return(number%2==0);
		}
};
int main()
{
	Even_Odd checking;
	
	int num,catchnum;
	cout<<"Enter Number: ";
	cin>>num;
	
	checking.setnumber(num);
	catchnum=checking.getnumber();
	
	if(checking.condition()){
		cout<<catchnum<<" Is Even";
	}
	else 
	cout<<catchnum<<" Is Odd";
	
	return 0;
}
	
