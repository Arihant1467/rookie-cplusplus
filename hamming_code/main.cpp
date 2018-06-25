#include <iostream>

using namespace std;

int main()
{
    int data[7]={0};
    cout<<"Enter the 4-bit data whose hamming code is to be generated :\n";
    cin>>data[6]>>data[5]>>data[4]>>data[2];
    data[0]=data[0]^data[2]^data[4]^data[6];
    data[1]=data[1]^data[2]^data[5]^data[6];
    data[3]=data[3]^data[4]^data[5]^data[6];
    cout<<"The generated hamming code is :\n";
    for(int i=6;i>=0;--i)
    {
        cout<<data[i];
    }

    return 0;
}
