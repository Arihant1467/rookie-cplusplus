#include <iostream>
#include<stdlib.h>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    int cylinders=0,request=0,seektime=0,sp=0;
    vector<int> v;
    vector <bool> completion;
    int  min_seek_time(int curr,vector <int> &v2,vector <bool> &v3,int l);
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
        completion.push_back(false);
    }
    for(i=0;i<request;++i)
    {
        int pos=min_seek_time(sp,v,completion,request);
        seektime+=abs(sp-v[pos]);
        completion[pos]=true;
        sp=v[pos];
    }
    cout<<"The Total seek time is -"<<seektime;
    return 0;
}
int min_seek_time(int curr,vector <int> &v2,vector <bool> &v3,int l)
{
    int min=INT_MAX;int pos=0;
    for(int i=0;i<l;++i)
    {
        if(min>abs(curr-v2[i])&& v3[i]==false)
        {
            min=abs(curr-v2[i]);
            pos=i;
        }
    }
    return pos;
}
