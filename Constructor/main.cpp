#include <iostream>
using namespace std;
class Area
{
    int l,b;
    public:
    Area()
    {
        l=5;
        b=4;
    }
    Area(int length,int breadth)
    {
        l=length;
        b=breadth;
    }
    void calculate_area()
    {
        cout<<"Area -"<<l*b<<endl;
    }

};

int main()
{
    Area a1;
    Area a2(5,10);
    Area a3(a2);
    a1.calculate_area();
    a2.calculate_area();
    a3.calculate_area();

    return 0;
}
