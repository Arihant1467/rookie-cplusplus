#include <iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
using namespace std;
struct student
    {
        string name;
        string univ_rollno;
        float cgpa;
    };
class Student_class
{
        student s;
    public:
        void getdetails();
        void WritingInBinary();
        void WritingInSequentially();
        void ReadingInBinary();
        void ReadingInSequentially();
};
        void Student_class::getdetails()
        {
            cout <<"\n Enter the details of the student\n\n";
            cout<<"\n\n Enter name:\t";cin>>s.name;
            cout<<"\n\n Enter university roll name:\t";cin>>s.univ_rollno;
            cout<<"\n\n Enter your cgpa :\t";cin>>s.cgpa;
        }
        void Student_class::WritingInBinary()
        {
            ofstream of1;
            of1.open("s1.txt",ios::app|ios::binary|ios::out);
            of1.write((char*)&s,sizeof(s));
            of1.close();
        }
        void Student_class::WritingInSequentially()
        {
            ofstream of2;
            of2.open("s2.txt",ios::out|ios::app);
            of2<<"name:"<<s.name<<"\n"<<"university Roll No:"<<s.univ_rollno<<"\n"<<"CGPA:"<<s.cgpa<<"\n";
            of2.close();
        }
        void Student_class::ReadingInBinary()
        {
            ifstream if1;
            if1.open("s1.txt",ios::in|ios::binary);
            cout<<"\n\nThe data shown was written in binary form\n\n";
            while(if1.read((char*)&s,sizeof(s)))
            {
                cout<<"name-"<<s.name<<"\nUniversity Roll No-"<<s.univ_rollno<<endl;
                cout<<"CGPA-"<<s.cgpa;
            }
            if1.close();
        }
        void Student_class::ReadingInSequentially()
        {
            ifstream if2;
            if2.open("s2.txt",ios::in);
            cout<<"\n \n The data shown below was written sequentially\n\n";
            while(!if2.eof())
            {
                string line;
                getline(if2,line);
                cout<<line;

            }
            if2.close();
        }
int main()
{
    system("cls");
    cout<<endl<<endl<<endl;
    Student_class sc;
    sc.getdetails();
    sc.WritingInBinary();
    sc.WritingInSequentially();
    sc.ReadingInBinary();
    sc.ReadingInSequentially();
    return 0;
}
