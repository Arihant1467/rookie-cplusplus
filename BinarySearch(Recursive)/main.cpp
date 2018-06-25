#include <iostream>
#include<stdlib.h>
using namespace std;
int a[]={2,4,7,18,19,23,47,89};
int binarysearch(int low,int high,int d)
{
    if(low<=high)
    {
            int mid=(low+high)/2;
            if(a[mid]==d)
            {
                cout<<"\n\n elment found at position -:\t"<<mid+1;
                return 1;
            }
            else if(a[mid]>d)
            {
                return binarysearch(low,mid,d);
            }
            else
            {
                return binarysearch(mid+1,high,d);
            }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int low=0,high=7,number;
    cout<<"\n Enter a  number to be searched for :\t";cin>>number;
    cout<<"\n\n"<<binarysearch(low,high,number);
    return 0;
}
