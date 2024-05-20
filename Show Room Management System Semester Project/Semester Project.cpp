//.................................................Starting Of Program............................................................................//
									
#include <iostream>							//First Header file---> For input & output streams like cout & cin objects.
#include<iomanip>						   //Second Header File---> For setw() manuplator.
#include<conio.h>						  //Third Header File---> For getch() & getche() functions.
#include<windows.h>						 //Fourth Header File---> For Designing the console menu at run time i.e For Adding Colours.
#include<unistd.h>						//Fifth Header File-----> For sleep() function.
using namespace std;			         //Standard namespace used for cout and cin objects from standard library.

class My_Show_Room {			     	// My_Show_Room class.					
private:
    string CarNames[10]; //= {"COROLLA", "CIVIC", "CULTUS", "PRADO", "ALTO", "SWIFT", "YARIS", "MEHRAN", "CITY", "BOLAN"};
   
    long long CarPrice[10] = {20000, 30000, 40000, 50000, 60000, 70000, 8000, 9000, 10000, 12000};
    
	string CompanyName[10] = {"TOYOTA", "HONDA", "SUZUKI", "TOYOTA", "SUZUKI", "SUZUKI", "TOYOTA", "SUZUKI", "HONDA", "SUZUKI"};
    
	int orderedCars[10] = {0}; 			// 0 indicates no Order while 1 indicates ordered.
	public:
		My_Show_Room()
		{
			string CarNamesarray[10]= {"COROLLA", "CIVIC", "CULTUS", "PRADO", "ALTO", "SWIFT", "YARIS", "MEHRAN", "CITY", "BOLAN"};
			for(int i=0; i<10; i++)
			CarNames[i]=CarNamesarray[i];

		}
	void show_Room_Menu();
	void available_Cars();
	void order_Cars();								//Declaration Of All functions with in the class.
	void check_order();
	void cancel_order();
	void code_Runner();
		
};	//End of Class
		
void Intro()										//INTRO PLACED IN INTRO FUNCTION (TO DISPLAY FIRST).
	{
		int percent=0;
		cout<<"\n\n\n\t\t\t\t\t\t               SHOW---ROOM---MANAGEMENT---SYSTEM                 "<<endl;
		cout<<"\t\t\t\t\t--------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t->\t            WELCOME TO SHOW_ROOM_MANAGEMENT_SYSTEM                "<<endl;
		cout<<"\t\t\t\t\t->\t               ->PF PROJECT BY:-  SIR SAJJAD                          "<<endl;
		cout<<"\t\t\t\t\t->\t                 MADE BY -> AHSAN---ALI (23SW009)                 "<<endl;
		cout<<"\t\t\t\t\t->\t                         MEHRAN UNIVERSITY	 	                  "<<endl;
		cout<<"\t\t\t\t\t__________________________________________________________________________"<<endl;
		cout<<"Press any key to start the system......!";
		getch();
		system("cls");
		for(int i=percent ; i<=100 ; i+=5)
		{
			cout<<"\n\t\t\t\t\t\t\t\tWait Please Loading-------->"<<i<<"%";
			system("cls");
		}
	}
							//Using functions after class.
				void My_Show_Room::show_Room_Menu()					
	{
		system("cls");
		cout<<"\t\t\t\t\n";
		cout<<"\t\t\t\t\t------------------------OUR SYSTEM-MENU------------------------------\n";
		cout<<"\t\t\t\t\t=====================================================================\n";
		cout<<"\t\t\t\t\t  ENTER [1] ---> VIEW-AVAILABLE-CARS       ENTER [2] ---> BUY-CAR\n";
		cout<<"\t\t\t\t\t  ENTER [3] ---> CHECK-THE-CAR             ENTER [4] ---> REMOVE-CAR\n\n";
		cout<<"\t\t\t\t\t\t       ENTER [5] --->  Exit THE SYSTEM                 \n\n";
		cout<<"\t\t\t\t\t=====================================================================\n";
		cout<<"\t\t\t\t\t---------------------------------------------------------------------\n";
		cout<<"\t\t\t\t\t=====================================================================\n";
		cout<<"Enter Your Choice --> ";
	}
void My_Show_Room::available_Cars() {
        cout << "\t\t\t\t\t---------------------AVAILABLE CARS AT OUR SHOW-ROOM-------------------\n\n";
        cout<<"\t\t\t\t\t=====================================================================\n";
        cout<<setw(50)<<"Sr.\t"<<"CAR-NAMES"<<"\t"<<"CAR-COMPANY "<<"\t\t"<<"CAR-PRICE"<<endl;
        cout<<"\t\t\t\t\t=====================================================================\n";
		for(int i = 0; i < 10; i++) 
		{
        	cout<<setw(48)<<i+1<<":\t"<<CarNames[i]<<"\t\t("<<CompanyName[i]<<") \t\t $"<<CarPrice[i]<<endl;
        	cout<<"\t\t\t\t\t--------------------------------------------------------------------"<<endl;
        	
        }
 cout<<"Press any key to go back to the system..........!";
        getch();
    	}

	void My_Show_Room::order_Cars() {
    cout << "\n\n";
    cout << "\t\t\t\t\t-------<*><*><*>-----------------------------------------<*><*><*>--------\n";
cout << "\t\t\t\t\t===================CAR-ORDERS-MENU========================================\n";
    cout << "\t\t\t\t\t-------<*><*><*>-----------------------------------------<*><*><*>--------\n";
    cout << "\n\n\t\t\t\t\tEnter the name of the car you want to order: ";
    string choice;
    cin >> choice;

    for (int i = 0; i < 10; i++) 
	{
       if(choice == CarNames[i])
		{
          if(orderedCars[i]==0) 
		  {
                orderedCars[i] = 1;
                cout << "\t\t\t\t\t\t(CONGRATULATIONS!) Order placed successfully............!\n";
            }
		 else
		  {
               cout << "\t\t\t\t\t\tSorry this car has already been booked.\n";
           }
            break;
		}
  if (i == 9) {
            cout << "\t\t\t\t\t\tSorry the car you want to book is not available at our showroom.\n";
        }
    }

    cout << "Press any key to go back to the system..........!";
    getch();
}

    void  My_Show_Room::check_order() 
	{
cout<<"\t\t\t\t\t-------<*><*><*>-----------------------------------------<*><*><*>--------\n";
		cout<<"\t\t\t\t\t\t\t\t\tOrdered Cars:\n";
		cout<<"\t\t\t\t\t-------<*><*><*>-----------------------------------------<*><*><*>--------\n";
		cout<<setw(50)<<"Sr.\t"<<"CAR-NAMES"<<"\t"<<"CAR-COMPANY "<<"\t\t"<<"CAR-PRICE"<<endl;
        for(int i = 0; i < 10; i++) 
		{
            if(orderedCars[i] == 1) 
			{
                cout<<setw(48)<<i+1<<":\t"<<CarNames[i]<<"\t\t("<<CompanyName[i]<<") \t\t $"<<CarPrice[i]<<endl;
            }
        }
cout<<"\nPress Any key to go back to the system.........!";
        getch();
    }

	void My_Show_Room::cancel_order() {
    cout << "\n\n\n\t\t\t\t\tEnter the name of the car you want to cancel: ";
    string choice;
    cin >> choice;

    for (int i = 0; i < 10; i++) 
	{
      if (choice == CarNames[i] && orderedCars[i] == 1)
		{
           orderedCars[i] = 0;
           cout<<"\t\t\t\t\t\tOrder canceled successfully!\n";
           break;													  // No need to continue the loop once the order is canceled
        } 
else if (i == 9) {
            cout<<"\t\t\t\t\t\tSORRY THIS CAR IS NOT AT OUR SHOW-ROOM \n";
        }
    }
    cout<<"\n\t\tPress any key to go back to the system.";
	getch();
}
    void  My_Show_Room::code_Runner()
	{
        int option;
				//Implementation of All options placed on menu page depends on this do while and switch statement. 
        do {
            show_Room_Menu();
            cin >> option;
            switch (option) {
                case 1:
                    system("cls");available_Cars();			//If user press->1 then run the function of available_cars.
                    break;
                case 2:	
 system("cls");order_Cars();			   //If user press->2 then run the function of order_cars.
                    break;
                case 3:
                    system("cls");check_order();		 //If user press->3 then run the function of check_cars.
                    break;
                case 4:
                    system("cls");cancel_order();		//If user press->4 then run the function of cancel_order.
                    break;
                case 5:
                	system("cls");Intro();				//If uer press 5 means basically Exit the system then shows the Intro page again as exit.
     	cout<<"Exiting program. Goodbye...............!\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (option != 0);						//If user press 0 then shows the message Invalid choice. 
    }

int main() {
	system ("color F8");
	Intro();
    My_Show_Room showroom;
    showroom.code_Runner();
	
}
