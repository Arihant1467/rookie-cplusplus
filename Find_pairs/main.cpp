#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int test_case;
    vector<long> v;
    long t=0,n=0;
    signed long pairs=0;
    cin>>test_case;
    while(test_case--)
    {
        vector<long> v;
        pairs=0;
        cin>>n;
        while(n--)
        {
            cin>>t;
            v.push_back(t);
        }
        for(long i=0;i<v.size();++i)
        {
            for(long j=i;j<v.size();++j)
            {
                if(v[i]==v[j])
                {
                    ++pairs;
                }
            }
        }
        cout<<pairs<<"\n";
        v.clear();
    }
    return 0;
}
