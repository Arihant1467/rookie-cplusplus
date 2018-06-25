#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a bit stream sequence of 8 bit length\n";
    int a[8];
    for(int i=0;i<8;++i)
    {
        cin>>a[i];
    }
    cout<<"Enter frame size -";
    int f=0;
    cin>>f;
    int k=0;
    int s=f;
    int nof=8/f;
    while(nof--)
    {

    cout<<"STX DLE ";
    while(k<s)
    {
        cout<<a[k]<<" ";
        ++k;
    }
    cout<<"DLE ETX ";
    s=s+f;
    }
}
