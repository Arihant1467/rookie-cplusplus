#include <iostream>
#include<conio.h>
using namespace std;

int main()
{

    cout<<"Enter the character stream-\n";
    int a[16]={0};
    for(int k=0;k<16;++k)
    {
        cin>>a[k];
    }
    cout<<"The bit stuffing looks like this -\n";
    for(int i=0;i<16;++i)
    {
        if(a[i]==a[i+1]&& a[i+1]==a[i+2] && a[i+2]==a[i+3] && a[i+3]==a[i+4])
        {
            cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<" "<<a[i+3]<<" "<<a[i+4]<<" "<<"0"<<" ";
            i=i+4;
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
