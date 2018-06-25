#include<iostream>
#include<conio.h>
using namespace std;
class student
{       protected:
    int rollno;
	public:
		void getnumber(int a)
		{
			rollno=a;
		}
		void putnumber()
		{
			cout<<"Rollno:"<<rollno<<endl;
		}


};
class test:virtual public student
{       protected:
    float m1,m2;
	public:
		void getmarks(float x,float y)
		{
			m1=x;m2=y;
		}
		void putmarks()
		{
			cout<<"Marks obtained:"<<m1<<"\t\t"<<m2<<endl;
		}


};
class sports:public virtual student
{       protected:
    float score;
	public:
		void getscore(float a1)
		{
			score=a1;
		}
		void putscore()
		{
			cout<<"Score:"<<score<<endl;
		}


};
class result :public test,public sports
{
    float total;
	public:
		void display()
		{
			total=m1+m2+score;
			putnumber();
			putmarks();
			putscore();
			cout<<"Total is:" <<total<<endl;
		}


};

int main()
{       result stud;
	stud.getnumber(12);
	stud.getmarks(90.9,96.9);
	stud.getscore(29.9);
	stud.display();
	return 0;
}
