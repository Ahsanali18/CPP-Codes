/*Write a C++ program to implement a class called Circle that has private member variables for radius.
Include member functions to calculate the circle's area and circumference.	*/

#include<iostream>
#include<cmath>
using namespace std;
class Circle{				//Declaration of Class with name --> Cirlce

		private:
		double radius;
		const double pi= 3.14;
		double area,circumference;
		public:

					void setRadius()
					{
						cout<<"Enter Radius: ";
						cin>>radius;
					}

					double calculateArea()
					{

						area=pi*pow(radius,2);
						return area;
					}

					double calculateCircumference()
					{
						circumference=2*pi*radius;
						return circumference;
					}
};

int main()
{
	Circle C1;
	double area, circumference;
	C1.setRadius();
	area=C1.calculateArea();
	circumference=C1.calculateCircumference();
	cout<<"Area is = "<<area<<"\nCircumference is: "<<circumference;

}
