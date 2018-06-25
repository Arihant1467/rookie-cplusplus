#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
class sjf
{
public:
    int name;
    int arrival_time;
    int burst_time;
    int priority;
    bool completed;
    sjf()
    {
        name=0;
        arrival_time=0;
        burst_time=0;
        priority=0;
        completed=false;
    }
};
sjf s[4];
sjf min_busrt_time()
{
   sjf min=;
    for(int i=0;i<4;++i)
    {
        if(min.burst_time>=s[i].burst_time)
        {
            min=s[i];
        }
    }
    return min;
}
using namespace std;

int main()
{
    void min_arrival_time();
    vector<int> v;
    cout<<"\n Enter the details about the Process-:\n\n";
    cout<<"Name    \tArrival    \tBurst   \tPriority\n";
    for(int i=0;i<4;++i)
    {
        cin>>s[i].name>>s[i].arrival_time>>s[0].burst_time>>s[0].priority;
    }
    int start=v[0].arrival_time;
    int limit=start;
    for(int i=0;i<4;++i)
    {
        limit+=s[i].burst_time;
    }
    cout<<"\n\n\n";
    while(limit--)
    {
        cout<<start;
    }
    return 0;
}

