#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{

    long test_case,zombie;
    vector<int> zombie_dist;
    cin>>test_case;
    while(test_case--)
    {
        long t=0,c_zombie=0,i=0;
        cin>>zombie;
        for(i=0;i<zombie;++i)
        {
            cin>>t;
            zombie_dist.push_back(t);
        }
        i=t=0;
        sort(zombie_dist.begin(),zombie_dist.end());
        while(i<zombie)
        {

            zombie_dist[i]=LONG_MAX;
            for(t=i;t<zombie_dist.max_size();++i)
            {
                if(zombie_dist[t]!=LONG_MAX)
                {
                    --zombie_dist[t];
                }
            }
            for(t=0;t<zombie_dist.max_size();++t)
            {
                if(zombie_dist[t]==0)
                {
                    ++c_zombie;
                }
            }
            if(c_zombie!=0)
            {
                cout<<"Goodbye Rick\n"<<c_zombie<<"\n";
                break;
            }
            ++i;
        }
            if(c_zombie==0)
            {
                cout<<"Rick now go and save Carl and Judas\n";
            }
    }
    return 0;
}

