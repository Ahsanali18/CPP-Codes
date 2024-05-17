#include<iostream>
using namespace std;

class Snake{
	private:
	string name;
	int num;
	public:
		void setdetails()
		{
			cout<<"Enter Snake Name: ";
			getline(cin,name);
			cout<<"Enter Snake Number: ";
			cin>>num;
		}
		void displaydata()
		{
			cout<<"\n\nSnake name is: "<<name<<endl;
			cout<<"Snake Number is: "<<num<<endl;
			cout<<"Snake Can Run fast.\n";
			cout<<"Snake Can Eat insects.\n";
		}
};

int main()
{
	Snake S;
	S.setdetails();
	S.displaydata();
	return 0;
}
