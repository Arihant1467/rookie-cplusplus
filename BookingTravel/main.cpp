#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<fstream>
#include<algorithm>
using namespace std;
int busid= 1210;

/*goto ka use karna hai*/
/*inline function wali warning check karni hai*/
/*naam ki array jaisi kucch banani padegi*/
/*class ke object ki bhi array banani padegi*/

class bus
{
 public:
 int date,month,year,nop,tbusid;
 char name[20];
 void bus1(char d[20])
 {
  if(strcmp(d,"mumbai")==0)
   {cout<<"\n \t\t\t**The price for ticket:1100**";}
  else if(strcmp(d,"jaipur")==0)
   {cout<<"\n \t\t\t**The price for ticket:1000**";}
  else if(strcmp(d,"delhi")==0)
   {cout<<"\n \t\t\t**The price for ticket:1500**";}
  else if(strcmp(d,"ahmedabad")==0)
   {cout<<"\n \t\t**The price for ticket:1200**";}
  }
/* void getbusdata()
 {

  cout<<"\nEnter the no.of passengers:";
  cin>>nop;
    cout<<"\nEnter details of passenger:\n";

    for(int i=0;i<nop;++i)
    {
     cout<<"Enter name:";
     cin>>name;
    }
 }
 */
 void getdate()
 {
  cout<<"\n\nEnter date of travel (dd/mm/yyyy):";
  cin>>date;
  cin>>month;
  cin>>year;
 }

 void getname()
 {
  cout<<"Enter Name:\n";
  cin>>name;
 }

 int getnop()
 {
  cout<<"No.of Passengers:";
  cin>>nop;
  return nop;
 }

 void setbusid()
 {
  tbusid=busid;
 }

 int getbusid()
 {
  return tbusid;
 }

 void busprice(char d[20])
 {
  if(strcmp(d,"mumbai")==0)
   {cout<<"Rs."<<nop*1100;}
  else if(strcmp(d,"jaipur")==0)
   {cout<<"Rs."<<nop*1000;}
  else if(strcmp(d,"delhi")==0)
   {cout<<"Rs."<<nop*1500;}
  else if(strcmp(d,"ahmedabad")==0)
   {cout<<"Rs."<<nop*1200;}
 }

 /*void showbusdata()
 {
  cout<<"Receipt:\n";
  cout<<"The no. of passengers:"<<nop<<endl;
  for(int j=0;j<nop;++j)
  {cout<<"name:"<<name<<endl;
   }
  cout<<"date of travel:"<<date<<":"<<month<<":"<<year<<":"<<endl;
 }*/
 void showdate()
 {
  cout<<"Date is:\n";
  cout<<date<<"/"<<month<<"/"<<year;
 }
 void showname()
 {
  cout<<name;
 }
 void shownop()
 {
  cout<<"No. of passengers are:";
  cout<<nop;
 }

};




class train
{
 public:
 int date1,month1,year1,nop1;
 char name1[20];

  void train1(char t[20],int trch)
 {
  if(strcmp(t,"mumbai")==0&&(trch==1))
   {cout<<"\n \t\t\t**The price for ticket:1600**";}
  else if(strcmp(t,"jaipur")==0&&(trch==1))
   {cout<<"\n \t\t\t**The price for ticket:1500**";}
  else if(strcmp(t,"delhi")==0&&(trch==1))
   {cout<<"\n \t\t\t**The price for ticket:2000**";}
  else if(strcmp(t,"ahmedabad")==0&&(trch==1))
   {cout<<"\n \t\t**The price for ticket:1700**";}
  else if(strcmp(t,"mumbai")==0&&(trch==2))
   {cout<<"\n \t\t\t**The price for ticket:1200**";}
  else if(strcmp(t,"jaipur")==0&&(trch==2))
   {cout<<"\n \t\t\t**The price for ticket:1250**";}
  else if(strcmp(t,"delhi")==0&&(trch==2))
   {cout<<"\n \t\t\t**The price for ticket:1500**";}
  else if(strcmp(t,"ahmedabad")==0&&(trch==2))
   {cout<<"\n \t\t\t**The price for ticket:1350**";}
  }

   void gettraindata()
 {
  cout<<"\n\nEnter date of travel (dd/mm/yyyy):";
  cin>>date1;
  cin>>month1;
  cin>>year1;
  cout<<"\nEnter the no.of passengers:";
  cin>>nop1;
    cout<<"\nEnter details of passenger:\n";
    for(int i=0;i<nop1;++i)
    {
     cout<<"Enter name:";
     cin>>name1;
    }
 }


  void trainprice(char t[20],int trch)
 {
  if(strcmp(t,"mumbai")==0&&(trch==1))
   {cout<<"Rs."<<nop1*1600;}
  else if(strcmp(t,"jaipur")==0&&(trch==1))
   {cout<<"Rs."<<nop1*1500;}
  else if(strcmp(t,"delhi")==0&&(trch==1))
   {cout<<"Rs."<<nop1*2000;}
  else if(strcmp(t,"ahmedabad")==0&&(trch==1))
   {cout<<"Rs."<<nop1*1700;}
  else if(strcmp(t,"mumbai")==0&&(trch==2))
   {cout<<"Rs."<<nop1*1200;}
  else if(strcmp(t,"jaipur")==0&&(trch==2))
   {cout<<"Rs."<<nop1*1250;}
  else if(strcmp(t,"delhi")==0&&(trch==2))
   {cout<<"Rs."<<nop1*1500;}
  else if(strcmp(t,"ahmedabad")==0&&(trch==2))
   {cout<<"Rs."<<nop1*1350;}
 }

 void showtraindata()
 {

 }


};



class flight
{
 public:
 int date2,month2,year2,nop2;
 char name2[20];

  void flight1(char f[20],int flch)
 {
  if(strcmp(f,"mumbai")==0&&(flch==1))
   {cout<<"\n \t\t\t**The price for ticket:4500**";}
  else if(strcmp(f,"jaipur")==0&&(flch==1))
   {cout<<"\n \t\t\t**The price for ticket:4300**";}
  else if(strcmp(f,"delhi")==0&&(flch==1))
   {cout<<"\n \t\t\t**The price for ticket:5000**";}
  else if(strcmp(f,"ahmedabad")==0&&(flch==1))
   {cout<<"\n \t\t**The price for ticket:4700**";}
  else if(strcmp(f,"mumbai")==0&&(flch==2))
   {cout<<"\n \t\t\t**The price for ticket:3700**";}
  else if(strcmp(f,"jaipur")==0&&(flch==2))
   {cout<<"\n \t\t\t**The price for ticket:3600**";}
  else if(strcmp(f,"delhi")==0&&(flch==2))
   {cout<<"\n \t\t\t**The price for ticket:4200**";}
  else if(strcmp(f,"ahmedabad")==0&&(flch==2))
   {cout<<"\n \t\t**The price for ticket:3900**";}
  }

   void getflightdata()
 {
  cout<<"\n\nEnter date of travel (dd/mm/yyyy):";
  cin>>date2;
  cin>>month2;
  cin>>year2;
  cout<<"\nEnter the no.of passengers:";
  cin>>nop2;
    cout<<"\nEnter details of passenger:\n";
    for(int i=0;i<nop2;++i)
    {
     cout<<"Enter name:";
     cin>>name2;
    }
 }


  void flightprice(char t[20],int trch)
 {
  if(strcmp(t,"mumbai")==0&&(trch==1))
   {cout<<"Rs."<<nop2*4500;}
  else if(strcmp(t,"jaipur")==0&&(trch==1))
   {cout<<"Rs."<<nop2*4300;}
  else if(strcmp(t,"delhi")==0&&(trch==1))
   {cout<<"Rs."<<nop2*5000;}
  else if(strcmp(t,"ahmedabad")==0&&(trch==1))
   {cout<<"Rs."<<nop2*4700;}
  else if(strcmp(t,"mumbai")==0&&(trch==2))
   {cout<<"Rs."<<nop2*3700;}
  else if(strcmp(t,"jaipur")==0&&(trch==2))
   {cout<<"Rs."<<nop2*3600;}
  else if(strcmp(t,"delhi")==0&&(trch==2))
   {cout<<"Rs."<<nop2*4200;}
  else if(strcmp(t,"ahmedabad")==0&&(trch==2))
   {cout<<"Rs."<<nop2*3900;}
 }

 void showflightdata()
 {

 }



};




int main()
{
    system("cls");
    int choice,choice1,c;
    int moftrans,trch,flch;
    //int buschoice;
    char ch1;
    bus a;

    train x;
    flight z;
    cout<<"\n\t\t\t\tWelcome";
    cout<<"\n\n\nEnter your choice to proceed-\n\n 1)Type 1 for travel \n\n 2)Type 2 for tours\n\n\n --->";
    cin>>choice;
    system("cls");
    fstream b;
    fstream t1;
    fstream f1;
    char dest[20];

    if(choice==1)
     {
            loop2: cout<<"\n\n\n 1) Press 1 for Booking Ticket\n\n 2) Press 2 for Reservation Checking\n\n 3) Press 3 for Cancellation\n\n\n\n --->";
            cin>>choice1;
            system("cls");
            if(choice1==1)
              { cout<<"\n\n\nType the destination:\n\n->Mumbai\n\n->Jaipur\n\n->Delhi\n\n->Ahmedabad\n\n\n\n--->";
                cin>>dest;
                system("cls");
                   if((strcmp(dest,"delhi")==0)||(strcmp(dest,"mumbai")==0)||(strcmp(dest,"ahmedabad")==0)||(strcmp(dest,"jaipur")==0))
	              {
	                 cout<<"\n\n\nSelect Mode of Transport:\n\n\n \t Press 1 for BUS\n\n \t Press 2 for TRAIN\n\n \t Press 3 for Flight\n\n\n\n -->";
	                 cin>>moftrans;
	                 system("cls");
		             if(moftrans==1)
                         {
		                    a.bus1(dest);
		                    c=a.getnop();
                            system("cls");
		                    a.getdate();
		                    a.setbusid();
                            system("cls");
		                    b.open("bus.txt",ios::app|ios::out);
		                    b<<a.getbusid()<<" "<<"27 06 2016 ";
		                    for(int g=0;g<c;++g)
		                         { string name;
		                         cout<<"Enter name :\t";
                                   cin>>name;
		                           b<<name<<" ";
		                           cout<<"\n";
		                         }
                            b<<"\n";
		                    b.close();
		                    busid++;
		                    system("cls");
                            cout<<"\n\n \t\t\tThe total amount to be paid:";
		                    a.busprice(dest);
		                    cout<<endl<<endl;
		                    cout<<"Your unique user id is:"<<a.getbusid();
		                    cout<<endl;
                            cout<<"\n\n\n\nWant to confirm?\n\n Enter y to confirm n to cancel!\n\n --->";
		                    cin>>ch1;
                            system("cls");

		                    if(ch1=='y'||ch1=='Y')
		                        {
                                  cout<<"\n\n\n\n\n\n \t\t\t\tTicket(s) Booked!";
		                        }

		                }
		             else if(moftrans==2)
                     {
                            cout<<"\n\n\n 1)Type 1 for A.C Reservation\n\n 2)Type 2 for sleeper Reservation\n\n\n\n--->";
                            cin>>trch;
                            system("cls");
                            x.train1(dest,trch);
                            x.gettraindata();
		                    system("cls");
		                    cout<<"\n\n \t\t\tTotal amount to be paid:";
		                    x.trainprice(dest,trch);
		                    cout<<"\n\n\n\nWant to confirm?\n\n Enter y to confirm n to cancel!\n\n --->";
		 cin>>ch1;
		 system("cls");
		  if(ch1=='y'||ch1=='Y')
		    {
		      t1.open("train.txt",ios::out|ios::in);
		      t1.write((char*)&x,sizeof(x));
		      t1.close();
		      cout<<"\n\n\n\n\n\n \t\t\t\tTicket(s) Booked!";
		    }
		    else
		    {goto loop2;}
		 }
		 else if(moftrans==3)
		 {
		   cout<<"\n\n\n 1)Type 1 for Business Class\n\n 2)Type 2 for Economy Class\n\n\n\n--->";
		  cin>>flch;
		  system("cls");
		  z.flight1(dest,flch);
		  z.getflightdata();
		  system("cls");
		  cout<<"\n\n \t\t\tTotal amount to be paid:";
		  z.flightprice(dest,flch);
		   cout<<"\n\n\n\nWant to confirm?\n\n Enter y to confirm n to cancel!\n\n --->";
		 cin>>ch1;
		 system("cls");
		  if(ch1=='y'||ch1=='Y')
		    {
		      f1.open("flight.txt",ios::out|ios::in);
		      f1.write((char*)&z,sizeof(z));
		      f1.close();
		      cout<<"\n\n\n\n\n\n \t\t\t\tTicket(s) Booked!";
		    }
		  else
		  {goto loop2;}
		 }
		 else
		 {
		  cout<<"\n\n\n\n\n\n \t\t\tInvalid Choice!";
		 }
	    }
	    else
	    {
	     cout<<"\n\n\n\n\n\n \t\t\tInvalid Choice!";
	    }

      }
      else if(choice1==2)
             {   string bookingcodeuser;
	              cout<<"Enter your ID:\t";
	             cin>>bookingcodeuser;
	            // ifstream if2;
	             cout<<endl;
	             string newline;
	             b.open("bus.txt");
	             while(!b.eof())
	                   {

	                      getline(b,newline);
	                      string substringnewline=newline.substr(0,4);
	                      if(!substringnewline.compare(bookingcodeuser))
	                             {
	                                 cout<<"\nYes its been booked\n";

	                                 replace(newline.begin(),newline.end(),' ','\n');
	                                 cout<<"\n\n"<<newline<<endl;
	                                 break;
	                             }
	                    }

                    b.close();
               }

     else if(choice1==3)
      {

      }
            else
            {
                cout<<"\n\n\n\n\n\n \t\t\tInvalid Choice!";
            }

     }

     return 0;

}


     // end of main






