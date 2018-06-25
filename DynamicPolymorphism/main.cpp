#include<iostream>
#include<string.h>
using namespace std;
class media
{   protected:
  char title[20];
  float price;
    public:
	media(char *e,float a)
	{
		strcpy(title,e);

		price=a;
	}
	virtual void display() { }
};
class book:public media
{
   int pages;
    public:
	book(char *s,float a,int p):media(s,a)
	  {
		pages=p;
	  }
	void display()
	  {
		cout<<"\n Title:"<<title<<endl;
		cout<<"\n Pages:"<<pages<<endl;
		cout<<"\n Price:"<<price<<endl;
	  }

};
class tape:public media
{
	float time;
	  public:
		tape(char *s,float a,int t):media(s,a)
		{
			time=t;
		}
		void display()
		{
		cout<<"\n Ttitle:"<<title<<endl;
		cout<<"\n Play:"<<time<<"mins"<<endl;
		cout<<"\n Price"<<price<<endl;
		}
};
int main()
{       char *title=new char[20];
	float price,time;
	int pages;
	cout<<"\n ENTER BOOK DETAILS"<<endl;
	cout<<"Title:"; cin>>title;
	cout<<"Price:";cin>>price;
	cout<<"Pages:";cin>>pages;
	book book1(title,price,pages);

	cout<<"\n ENTER TAPE DETAILS"<<endl;
	cout<<"Title:";cin>>title;
	cout<<"Price:";cin>>price;
	cout<<"Play time(mins):";cin>>time;
	tape tape1(title,price,time);

	media* list[2];
	list[0]=&book1;
	list[1]=&tape1;

	cout<<"MEDIA DETAILS....";
	cout<<"BOOKS..";
	list[0] ->display();
	cout<<"TAPE..";
	list[1] ->display();





	return 0;
}
