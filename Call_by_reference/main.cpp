#include <iostream>

using namespace std;

int main()
{
    void show(int *a);
    int a=12;
    cout<<"Before show-"<<a<<endl;
    show(&a);
    cout<<"After show-"<<a;
    return 0;
}
void show(int *a)
{
    *a=13;
    cout<<"in show-"<<*a<<endl;
}
