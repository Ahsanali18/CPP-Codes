#include<iostream>
using namespace std;

class Myclass{
        private:
        int num;
        public:
                    void setdata()
                    {
                        cout<<"Enter Number: ";
                        cin>>num;
                    }
                    int getdata()
                    {
                        return num;
                    }
};

int main()
{
    Myclass obj1,obj2;
    obj1.setdata();
    int p=obj1.getdata();
    cout<<"Entered Number is: "<<p;
    return 0;
}
