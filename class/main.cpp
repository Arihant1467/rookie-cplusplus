#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class MyClass
{

public:
    int d;
    MyClass()
    {
        d=5;
    }
    int memberfun(){return 1;}
};
void fun(MyClass &a)
{
  //cout<<a.memberfun();
  a.d=7;
  cout<<"In reference -\t"<<a.d<<endl;
}
int main()
{

 MyClass obj;
 fun(obj);
 cout<<"In originalL-\t"<<obj.d;
 return 0;
}
