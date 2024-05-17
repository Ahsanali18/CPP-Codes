#include<iostream>
using namespace std;

class Note_Book{
	private:
	int bookid;
	string bookname;
	int bookprice;
	public:
		Note_Book()
		{
			cout<<"Enter Book name:";
			getline(cin,bookname);
			cout<<"Enter Book -ID: ";
			cin>>bookid;
			cout<<"Enter Book Price: ";
			cin>>bookprice;
			cin.ignore();
		}
		void input()
		{
			cout<<"Book name is: "<<bookname<<endl;
			cout<<"Book Id is: "<<bookid<<endl;
			cout<<"Book Price is: "<<bookprice<<endl;
		}

};

int main()
{
	Note_Book B1,B2;
	B1.input();
	B2.input();	
}
