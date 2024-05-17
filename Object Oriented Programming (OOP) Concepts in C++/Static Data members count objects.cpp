#include<iostream>
using namespace std;

class CountObjects{
	
		private:
		static int number;
		public:
				 CountObjects()				//Constructor
				{
					number++;
				}
				void displayNoOfObjects()
				{
					cout<<"There are "<<number<<" Objects are created in Your class: ";
				}				
};
int CountObjects::number=0;

int main()
{
	CountObjects Obj1,Obj2;
	Obj1.displayNoOfObjects();
}
