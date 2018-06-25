#include <iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
    int cylinders=0,request=0,seektime=0,sp=0;
    vector<int> v;
    cout<<"Enter the no of Cylinders :-\t";
    cin>>cylinders;
    cout<<"Enter the starting point :\t";
    cin>>sp;
    cout<<"Enter the no of request :-\t";
    cin>>request;
    cout<<"Enter the request queue :-\n";
    int i=request;int t=0;
    while(i--)
    {
        cin>>t;
        v.push_back(t);
    }
    for(i=0;i<request;++i)
    {
        seektime+=abs(sp-v[i]);

        sp=v[i];
    }
    cout<<"The total Seek Time is :-"<<seektime;
    return 0;
}
