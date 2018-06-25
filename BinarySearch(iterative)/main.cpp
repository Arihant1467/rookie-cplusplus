#include <iostream>
#include<stdlib.h>
#include<limits.h>
using namespace std;
int a[]={2,4,7,18,19,23,47,89};
int main()
{
    bool found=0;
    system("cls");
    int low,high,mid,number;
    low=0;
    high=7;

    cout<<"\n Enter a number to be searched :\t";cin>>number;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==number)
        {

            found=1;
            break;
        }
        else if(a[mid]>number)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }

    }
    if(found)
    {
        cout<<"\n\n\n Found at: "<<mid+1;
    }
    else
    {
        cout<<"\n\n\n Not found";
    }
    cout<<endl<<endl<<endl;
    return 0;
}
