#include<iostream>
using namespace std;

void passbyreference(int &a)
{
   a=10;
}

int main()
{
   int a=5;
   passbyreference(a);  
cout<<"value of variable passed by reference: "<<a;

}
