#include<iostream>
using namespace std;

class Addition{
        private:
        int num1,num2;
        public:
        void setdata();
        int getdata();
};

int main()
{
    Addition obj1;
    obj1.setdata();
    cout<<obj1.getdata();
}
void Addition::setdata()
{
    cout<<"Enter 2 Numbers: ";
    cin>>num1>>num2;
}

int Addition::getdata()
{
    return num1+num2;
}
