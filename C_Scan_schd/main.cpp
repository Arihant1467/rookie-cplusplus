#include <iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int cylinders=0,request=0,seektime=0,sp=0;
    vector<int> v;
    vector<bool> completion;
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
    sort(v.begin(),v.end());
    bool complete=false;
    while(!complete)
    {
         for(i=0;i<request;++i)
        {
            if(sp<v[i] && completion[i]==false)
            {
               seektime+=abs(sp-v[i]);
               completion[i]=true;
               sp=v[i];
            }
        }

         for(int k=0;k<request;++k)
         {
             if(completion[k]==true)
             {
                 complete=true;
             }
             else
             {
                 complete=false;
                 sp=0;
                 seektime+=cylinders;
                 break;
             }
         }
    }
    cout<<"\n\nThe total seek Time is -  "<<seektime;
    return 0;
}
