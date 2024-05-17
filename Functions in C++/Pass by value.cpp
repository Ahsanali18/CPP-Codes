#include<iostream>
using namespace std;
void passbyvalue(int a)
{
    a=10;
}

int main()

{
  int a=5;
  passbyvalue(a);
  
 cout<<"Value of the variable passed by value: "<<a;
}
