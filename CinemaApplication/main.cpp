#include <iostream>
#include "Cinema.h"
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int option;Cinema c;Cinema c2;//int a;
    cout<<"\n\n\n\n\n\n\n\n"<<endl;;
    cout<<"\t\t    **********  WElCOME TO YOUR CINEMAS *********\n\n\n\n\t\t    Enter any key to continue\t\t";
    getch();
    do
    {
        system("cls");
        cout<<"\n\n1.View movie running at your near by theatre\n\n"<<endl;
        cout<<"2.Check seat availibility \n\n"<<endl;
        cout<<"3.To check Booking status\n\n"<<endl;
        cout<<"4.To Delete Your Booking\n\n"<<endl;
        cout<<"5.0 to exit\n\n";
        cout<<"\nEnter your choice number\t\t";
        cin>>option;
        switch(option)
        {
            case 0: system("cls");cout<<"\n\n\nEXITING...\n\n";exit(0);break;
            case 1:c.showRunningCinema();break;
            case 2:c.showSeatAvailibility(c2);
                    if(c.cinemaOption>0)
                    {
                        c.bookTickets(c2);
                        c.cinemaOption=0;// if user has any response recorded will to go to our
                                        // booking page to book tickets for selected show
                    }

                    break;
            case 3:c.checkBookingStatus();
                   break;
            case 4:c.deleteBooking(c2);
                    break;
            default: cout<<"Invalid option\n\n";break;
        }

    }while(option!=0);
    return 0;
}

