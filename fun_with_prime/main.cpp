#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    bool number[57];
    for(int i=0;i<57;++i)
    {
    		number[i]=false;
    }
    number[0]=true;
    number[1]=true;
    number[2]=true;
    number[3]=true;
    number[5]=true;
    number[7]=true;
    number[11]=true;
    number[13]=true;
    number[17]=true;
    number[19]=true;
    number[23]=true;
    number[29]=true;
    number[31]=true;
    number[37]=true;
    number[41]=true;
    number[43]=true;
    number[47]=true;
    number[53]=true;
    long test_case=0,num=0;
    cin>>test_case;
    while(test_case--)
    {
    	cin>>num;
    	int t=0;
    	do
    	{
    		t+=num%10;
    		num=num/10;
    	}while(num!=0);
    	cout<<t<<"\n\n\n";
    	if(number[t])
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    }

    return 0;
}
