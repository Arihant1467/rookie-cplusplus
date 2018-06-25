#include <iostream>
#include<conio.h>
using namespace std;

int main()
{

    bool p[5];
    p[0]=p[1]=p[2]=p[3]=p[4]=false;
    int resource[4];
    resource[0]=resource[1]=resource[2]=resource[3]=0;
    int allocated[5][4]={0},need[5][4]={0},available[4]={0};
    int i=0,j=0;
    for(;i<4;++i)
    {
        cout<<"Enter the instances of Resource "<<i+1<<"  ";cin>>resource[i];
    }
    cout<<"\nEnter the allocation matrix:\n";
    for(i=0;i<5;++i)
    {
        for(j=0;j<4;++j)
        {
            cin>>allocated[i][j];
        }
    }
    cout<<"\n Enter the need matrix:\n";
    for(i=0;i<5;++i)
    {
        for(j=0;j<4;++j)
        {
            cin>>need[i][j];
        }
    }
    for(i=0;i<4;++i)
    {
        int sum=0;
        for(j=0;j<5;++j)
        {
            sum+=allocated[j][i];

        }
        available[i]=resource[i]-sum;
    }
    //cout<<"\n\n"<<available[0]<<available[1]<<available[2]<<available[3];
    i=0;
    while(!p[0]||!p[1]||!p[2]||!p[3]||!p[4])
    {
        int cond=1;
        if(!p[i%5])
        {

            for(j=0;j<4;++j)
                {
                    if(available[j]>=need[i%5][j])
                    {
                        cond=1;
                    }
                    else
                    {
                        cond=0;
                        break;
                    }
                }
                if(cond)
                {
                    p[i%5]=true;
                    cout<<"\nProcess "<<(i%5)+1<<"  has completed ";
                    for(int k=0;k<4;++k)
                    {
                        available[k]+=allocated[i%5][k];
                    }

                }


        }

        ++i;
    }
    return 0;
}
