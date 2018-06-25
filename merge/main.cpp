#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int a[]={4,9,1,2,74,86,32,104};// original unsorted array
int b[8];// auxilliary  array
void mergesort(int,int);
void mergefunction(int,int,int);
int main()
{
    system("cls");

    cout<<"The unsorted array:\n\n";
    for(int i=0;i<8;++i)
        cout<<"\t"<<a[i];
        mergesort(0,7);
        cout<<"\n\nThe sorted array is:\n\n";
        for( int k=0;k<8;++k)
        cout<<"\t"<<b[k];
cout<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
void mergesort(int low,int high)
{
    int mid=0;
    if(low&&high)
    {
         mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
    }
mergefunction(low,mid,high);
}
void mergefunction(int l,int m,int h)
{
    int p=l;
    int i=l;
    int j=m+1;
    while(i<=m&&j<=h)
    {
        if(a[i]<a[j])
        {
            b[p]=a[i];
            ++p;
            ++i;
        }
        else
        {
            b[p]=a[j];
            ++p;
            ++j;
        }
    }


        while(i<=m)
        {
            b[p]=a[i];
            ++p;
            ++i;
        }
        while(j<=h)
        {
            b[p]=a[j];
            ++p;
            ++j;
        }



    cout<<endl;

}

