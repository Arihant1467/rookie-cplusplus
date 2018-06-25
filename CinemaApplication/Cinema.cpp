#include "Cinema.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<fstream>
#include<stdio.h>
#include<cstdlib>
#include <ctime>
#include<algorithm>
using namespace std;

Cinema::Cinema()
{
   //cout<<"cinema"; //ctor
   for(int i=0;i<12;++i)
{
    for(int j=0;j<4;++j)
    {
        for(int k=0;k<4;++k)
        {
            cinemaseating[i][j][k]=0;
            cin1[i][j][k]=0;
        }
    }
}
   cinemaOption=0;
   for(int k=0;k<12;++k)
   {
        remainingseats[k]=16;
   }
}

//****************************************************************************
void Cinema::showRunningCinema()
{
    int selectcity;
    system("cls");
    cout<<"1.Indore\n\n2.Ujjain\n\n3.Dewas\n\n";
    cout<<"Select your City\t";
    cin>>selectcity;
    system("cls");
    switch(selectcity)
    {
        case 1:cout<<"1.InOX movies\n\n2.Satyam Cinemas\n\n";break;
        case 2:cout<<"1.PVR Cinemas\n\n2.Satyam Cineams\n\n";break;
        case 3:cout<<"1.Kastoor\n\n2.ManMandir\n\n";break;
    }
    cout<<"Enter your option\t\t";
    getch();
    system("cls");
    cout<<"\n\n\t\t    ******Currently Showing********\n\n\n";
    cout<<"\t\t    1.Fast and Furious 7(English)\n\n\t\t    2.Avengers: Age Of Ultron(English)\n\n";
    cout<<"\n\t\t     Enter 0 to go back to main menu\t\t";
    getch();
}

//*********************************************************************************************

void Cinema::showSeatAvailibility(Cinema &c2)
{       int a=0;// to know selection of user
        int choice;
        system("cls");
        cout<<"1.Indore\n\n2.Ujjain\n\n3.Dewas\n\n";
        cout<<"Select your City\t";
        cin>>choice;
        a+=choice*100;
        system("cls");
        switch(choice)
        {
        case 1:cout<<"1.InOX movies\n\n2.Satyam Cinemas\n\n";break;
        case 2:cout<<"1.PVR Cinemas\n\n2.Satyam Cineams\n\n";break;
        case 3:cout<<"1.Kastoor\n\n2.ManMandir\n\n";break;
        }
        cout<<"Enter your option\t\t";
        cin>>choice;a+=choice*10;
        system("cls");
        cout<<"\n\n\t\t    ******Currently Showing********\n\n\n";
        cout<<"\t\t    1.Fast and Furous 7(English)\n\n\t\t    2.Avengers: Age Of Ultron(English)\n\n";
        cout<<"\n\n\t\t    Enter your option\t\t";
        cin>>choice;a+=choice;
        system("cls");
        cout<<"\t\t\t\t\t0 for available \n\t\t\t\t\t1 for booked\n\n\n";
        switch(a)
        {
        case 111:    c2.seatsoftheatre(0);
                     c2.cinemaKey=0;
                    break;

  //**********************************************************
        case 112:   c2.seatsoftheatre(1);
                    c2.cinemaKey=1;
                    break;

  //************************************************************

        case 121:   c2.seatsoftheatre(2);
                    c2.cinemaKey=2;
                    break;

  //***********************************************************

        case 122:   c2.seatsoftheatre(3);
                    c2.cinemaKey=3;
                    break;

 //***********************************************************

        case 211:   c2.seatsoftheatre(4);
                    c2.cinemaKey=4;
                    break;

 //*************************************************************

        case 212:  c2.seatsoftheatre(5);
                   c2.cinemaKey=5;
                   break;

//**************************************************************
        case 221:  c2.seatsoftheatre(6);
                   c2.cinemaKey=6;
                   break;

//***************************************************************
        case 222:  c2.seatsoftheatre(7);
                   c2.cinemaKey=7;
                   break;

  //*************************************************************
        case 311: c2.seatsoftheatre(8);
                  c2.cinemaKey=8;
                  break;

 //**************************************************************
        case 312: c2.seatsoftheatre(9);
                  c2.cinemaKey=9;
                  break;

  //**************************************************************
        case 321: c2.seatsoftheatre(10);
                  c2.cinemaKey=10;
                  break;

//**************************************************************

        case 322: c2.seatsoftheatre(11);
                  c2.cinemaKey=11;
                  break;

//**************************************************************
        default:  cout<<"Not A valid option\n";
                  break;

}// *******END OF SWITCH******************************8
        getch();
        //system("cls");
        cout<<"\n\n\nPress Y to go to our booking page\n\nPress 0 to go back to main menu\n\n\nEnter your option\t\t ";
        char ch;// to check choice whether user wants go to our booking page
        cin>>ch;
        cinemaOption=0;
        if(ch=='y'||ch=='Y')
        {
           // bookTheTicket(a);
           cinemaOption=a;
        }

}//******************END of FUNCTION SHOW SEAT AVALIBILITY*****************



void Cinema::bookTickets(Cinema &c2)
{
    system("cls");

    ofstream of;
    string name,tel_no;char choice;int bookingcode,t;
    string tickets;
    cout<<"\n\n Enter Your Booking Credentials:\n";
    cout<<"\n\n Please enter your First name:\t";
    cin>>name;
    cout<<"\n\n Enter your mobile number:\t";
    cin>>tel_no;
    while(1)
    {
        if(tel_no.length()==10)
        {
            break;
        }
        else
        {
            cout<<"\n\n Mobile Number should be of 10 digits-\n\nEnter valid Mobile Number:\t";
            cin>>tel_no;
        }
    }
    cout<<"\n\n";
    while(1)
    {
    cout<<" Enter the no of tickets:\t";
    cin>>tickets;
     t=atoi(tickets.c_str());
    if(t<0)
    {
        cout<<"\n\n\n Sorry Enter a valid Number\n\n";
    }
    else if(t>c2.remainingseats[c2.cinemaKey])
    {
        cout<<"\n\n\n We Regret for inconvenience but we dont`t have enough seats\n\n\n";
        cout<<" We have only "<<c2.remainingseats[c2.cinemaKey]<<" remaining\n\n";
    }
    else if(t>0&&t<=c2.remainingseats[c2.cinemaKey])
    {
        break;
    }
    }
    string totalcostofTickets=tickets+"00";
    cout<<"\n\n The cost of your booking is:\t Rs "<<totalcostofTickets;
    cout<<"\n\n\n Press Y or y to confirm your booking and N to abort\t";
    cin>>choice;
    if(choice=='y'||choice=='Y')
    {   system("cls");
    cout<<"\n Theatre Preview\n\n";
    c2.seatsoftheatre(c2.cinemaKey);
       bookingcode=c2.randomBookingCode();
       switch(cinemaOption)
       {
            case 111:c2.bookseats(t,0,bookingcode);
                     of.open("cinema1.txt",ios::out|ios::ate|ios::app);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 112:of.open("cinema2.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,1,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 121:of.open("cinema3.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,2,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 122:of.open("cinema4.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,3,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 211:of.open("cinema5.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,4,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 212:of.open("cinema6.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,5,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 221:of.open("cinema7.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,6,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 222:of.open("cinema8.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,7,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 311:of.open("cinema9.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,8,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 312:of.open("cinema10.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,9,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 321:of.open("cinema11.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,10,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            case 322:of.open("cinema12.txt",ios::out|ios::ate|ios::app);
                     c2.bookseats(t,11,bookingcode);
                     of<<name<<" "<<tel_no<<" "<<tickets<<" "<<totalcostofTickets<<" "<<bookingcode<<"\n";
                     of.close();
                     c2.writingBookingDetails(bookingcode,name,tel_no,tickets);
                     break;
            default: cout<<"\n\n\nSorry such type of show doesn't exist\n\n";
       }//*********************** END of SWITCH******************************
       system("cls");
       cout<<"\n\nCongratulations your show has been Booked\n\n";
       cout<<"Your booking code:\t"<<bookingcode<<"\n\nPlease show this at counter for ticket and reach before 30 min prior to show\n";
       cout<<"\n\n\n***************THANK YOU FOR BOOKING ENJOY!**********************\n\n\n Enter any key to continue\t";
       getch();
    }//****************END OF IF********************
}

//*************************************************************************************************
void Cinema::writingBookingDetails(int bookcode,std::string name,std::string tel_no,std::string tickets)
{
    ofstream of2;
    of2.open("bookings.txt",ios::app|ios::ate|ios::out);
    of2<<bookcode<<" name:-"<<name<<" Tel.No:-"<<tel_no<<" Tickets:-"<<tickets<<"\n";
    of2.close();
}
//*****************************************************************************************************



void Cinema::checkBookingStatus()
{
    bool flag=0;
    system("cls");
    cout<<"\n Enter Your booking code-:\t";
    ifstream if2;
    string userBookCode;
    cin>>userBookCode;
    if2.open("bookings.txt");
    string line;
    while(!if2.eof())
    {
        getline(if2,line);
       string str2= line.substr(0,3);
       if(!userBookCode.compare(str2))
       {
           cout<<"\n\nBooking Code: ";
           replace(line.begin(),line.end(),' ','\n');
           replace(line.begin(),line.end(),'-',' ');
           cout<<line<<"\n\nYour show has been Booked ";
           flag=1;
           break;
       }
    }
    if(!flag)
    {
        cout<<"\n\nSORRY!  Booking code you entered does not exist\n";
    }
    if2.close();
    getch();
}

//*******************************************************************************
void Cinema::bookseats(int t,int a,int b)
{ int row,col;
        if(remainingseats[a]==t)
        {
                remainingseats[a]=0;
                for(int k=0;k<4;++k)
                {
                    for(int l=0;l<4;++l)
                    {
                        if(cinemaseating[a][k][l]==0)
                        {
                            cinemaseating[a][k][l]=1;
                            cin1[a][k][l]=b;
                        }
                    }
                }
        }
        else if(remainingseats[a]-t)
        {
            remainingseats[a]=remainingseats[a]-t;
                        while(t--)
                        {
                         cout<<"\n\nEnter the seat no(row no,col no) of your prefrence to be booked\n";
                         cin>>row;
                         cin>>col;
                         if(!(row>4||row<1||col>4||col<0))
                         {
                             if(!cinemaseating[a][row-1][col-1])
                             {
                                cinemaseating[a][row-1][col-1]=1;
                                cin1[a][row-1][col-1]=b;
                             }
                             else
                             {
                                 cout<<"\n\n*** We Know that seat is important for you but its been booked\n\n\n";
                                 ++t;
                             }
                         }
                         else
                         {
                                cout<<"\n\nInvalid seating number\n\n";
                         ++t;
                         }
                     }
            }
            else
            {
                cout<<"\n\n SORRY FOR INCONVINIENCE but only "<<remainingseats[a]<<" left"<<endl;
                cout<<"\n\n\nexiting....\n\t";
            }
}
//****************************************************************************************************

void Cinema::seatsoftheatre(int c)
{
    for(int i=0;i<4;++i)
                    {
                        cout<<i+1<<"\t";
                            for(int j=0;j<4;++j)
                            {
                                cout<<" "<<j+1<<"["<<cinemaseating[c][i][j]<<"]"<<" ";
                            }
                        cout<<"\n\n";
                    }
}

//**************************************************************************************************
int Cinema::randomBookingCode()     // generate random numbers
{
    int  r;
    srand(time(NULL));
    r = rand()%900+100;
    return r;
}
//**************************************************************************************************
void Cinema::deleteBooking(Cinema &c2)
{
    ifstream f1;ofstream f2;string bookcode;bool fl=false;
    f1.open("bookings.txt",ios::in);
    f2.open("dummy.txt",ios::out|ios::ate|ios::app);
    system("cls");
    cout<<"\nEnter your booking code:\t";cin>>bookcode;
    while(true)
    {
        if(bookcode.length()==3)
        {
            break;
        }
        else
        {
            cout<<"\n The booking code should be of 3 digits\n";
            cout<<"\n Enter the correct booking code:\t";cin>>bookcode;
        }
    }
        string line;
        while(!f1.eof())
        {
               getline(f1,line);
               string str2= line.substr(0,3);
               if(!bookcode.compare(str2))
               {
                  fl=true;

               }
               else
               {
                   f2<<line;
                   f2<<"\n";
               }
        }
        if(fl)
        {
            cout<<"\n\n The record is deleted:\n ";
                for(int i=0;i<12;++i)
                    {
                        for(int j=0;j<4;++j)
                        {
                            for(int k=0;k<4;++k)
                            {

                                if(c2.cin1[i][j][k]==atoi(bookcode.c_str()))
                                {
                                   c2.cin1[i][j][k]=0;
                                   c2.cinemaseating[i][j][k]=0;
                                }
                            }
                        }
                    }
        }
        else
        {
            cout<<"\n\n Such type of record does not exist:\n";
        }
        f1.close();
        f2.close();
        remove("bookings.txt");
        rename("dummy.txt","bookings.txt");
        cout<<"\n\n\n Enter any key to continue\t\t";
        getch();

}

