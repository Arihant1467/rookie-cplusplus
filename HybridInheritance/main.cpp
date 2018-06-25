#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"In A";
    }
};
class B:public A
{
    public:
    void print()
    {
        cout<<"In B";
    }
};
class C
{
    public:
    void print()
    {
        cout<<"In C";
    }
};
class D:public B,public C
{
    public:

};
int main()
{
    D d;
    d.A::print();
    return 0;
}
