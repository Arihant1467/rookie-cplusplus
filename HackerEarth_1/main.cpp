#include <iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;
int main()
{
    int test_cases=0,boys=0,girls=0,t,s,i=0;
    vector<int> boys_height;
    vector<int> girls_height;
    bool con=true;
    cin>>test_cases;
    while(test_cases--)
    {
        cin>>boys;
        cin>>girls;
        if(boys<=girls)
        {
            for( i=0;i<boys;++i)
            {
                cin>>t;
                boys_height.push_back(t);
            }
            t=0;
            for(i=0;i<girls;++i)
            {
                cin>>t;
                girls_height.push_back(t);
            }
            sort(boys_height.begin(),boys_height.end());
            sort(girls_height.begin(),girls_height.end());
            for(i=0;i<boys;++i)
            {
                if(boys_height[i]<=girls_height[i])
                {
                    con=false;
                    break;
                }
            }
            if(!con)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            s=boys+girls;
            while(s--)
            {
                cin>>t;
            }
            cout<<"NO\n";
            t=0;
        }
    }
    return 0;
}
