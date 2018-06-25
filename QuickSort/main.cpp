#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int a[10];
int quicksort(int,int);
int partitionArray(int,int);
int main()
{ int i=0;

    cout<<"Enter elements of the array\n";
    for(;i<10; ++i)
    {
        cout<<"\n\t\t";
        cin>>a[i];
    }

    cout<<quicksort(0,9);
    return 0;
}
int quicksort(int lb,int ub)
{
    int j;
    if(lb<ub)
    {
    j=partitionArray(lb,ub);
    if(j>5)
    return quicksort(lb,j-1);
    if(j<5)
    return quicksort(j+1,ub);
    else
        return a[j];
    }
}
int partitionArray(int lb,int ub)
{   int flag=0,i,j;
    int temp;
    int key=a[lb];


    while(!flag)
    {

        i=lb+1;
        j=ub;
        while(key>a[i])
        {
            ++i;
        }
        while(key<a[j])
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            temp=a[lb];
            a[lb]=a[j];
            a[j]=temp;
            flag=1;
        }

    }
     return j;

}
