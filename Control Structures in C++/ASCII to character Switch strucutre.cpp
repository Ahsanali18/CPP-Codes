/*Write a c++ program that converts ASCII value to character and vice versa.
if user presses 1 then convert ACII value to character.
if user presses 2 then convert Character value to ASCII (Using Switch Structure) 
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
				int number,choice;
				char anychar;
				cout<<"Enter 1 to Convert ASCII value to Character: "<<endl;
				cout<<"Enter 2 to Convert character  to Character ASCII value: ";
				cin>>choice;
				
				switch(choice){
				case 1:
				{
					cout<<"Enter any Number: ";
					cin>>number;
					cout<<"Character whose ASCII value you have entered is: "<<char(number);
					break;
				}
					
				case 2:
				{
					
					cout<<"Enter any character: ";
					cin>>anychar;
					cout<<"ASCII value of this character is: " <<int(anychar);
					break;
					}
				default :
				{
					cout<<"Enter 1 & 2 for conversion ";
									 } 					
}
}
