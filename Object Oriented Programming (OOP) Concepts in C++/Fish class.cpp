#include<iostream>
using namespace std;

class Fish{
	private:
	string name;
	int number;
	public:
		Fish(string n, int num)
		{
			name=n;
			number=num;
		}
		void Class_Detais()
		{
			cout<<"	Welcome to the Fish Class.\n";
			cout<<"The Name of Fish is: "<<name<<endl;
			cout<<"The Number of fish is: "<<number<<endl;
		}
		void Fish_Qualities()
		{
			cout<<"Fish Posses the following Qualities: \n";
			cout<<01<<"Fish can swim.\n";
			cout<<02<<"Fish can Eat.\n";
			cout<<03<<"Fish can Jump.\n";
			cout<<04<<"Fish can move.\n";
		}
};
int main()
{
	Fish F("Star.", 1);
	F.Class_Detais();
	F.Fish_Qualities();
	return 0;
}

