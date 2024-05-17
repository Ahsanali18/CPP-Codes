#include<iostream>
using namespace std;
/*
void printNumber(int *numberPtr)
{
	cout<<*numberPtr<<endl;
}

void printLetter(char *charPtr)
{
	cout<<*charPtr<<endl;
}

int main()
{
	int number=5;
	char letter='a';
	printNumber(&number);
	printLetter(&letter);
}
*/

//Now the Same work done by the One function Here Below...........!


void Pointers(void *p, char check)
{
	switch(check)
	{
		case 'i': cout<<*((int*)p)<<endl;
		case 'c': cout<<*((char*)p)<<endl;
	}
}
int main()
{
	int a=50;
	char p='a';
	Pointers(&a, 'i');
	Pointers(&p, 'c');
	
	return 0;
		
}
