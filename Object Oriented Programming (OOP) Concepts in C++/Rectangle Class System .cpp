/*Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter.
*/


#include<iostream>
using namespace std;

class Rectangle{
	private:
	double length,width;
	double area,perimeter;
	public:
			void setlength()
			{
				cout<<"Enter Length:";
				cin>>length;
			}
			void setwidth()
			{
				cout<<"Enter Width: ";
				cin>>width;
			}
			
			double calculateArea()
			{
				area=length*width;
				return area;
			}
			double calculatePerimeter()
			{
				perimeter=2*(length+width);
				return perimeter;
			}
			
};

int main()
{
	Rectangle R;
	R.setlength();
	R.setwidth();
	
	cout<<"Area of Rectange is: "<<R.calculateArea();
	cout<<"\nPerimeter of Rectange is: "<<R.calculatePerimeter();
}
