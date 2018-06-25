#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<vector<long long> > x;
    vector<long long > y;
    int n,m; long long a;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>a;
            y.push_back(a);
        }
       // sort(y.begin(),y.end());
        x.push_back(y);
        y.clear();
    }
    int q;
    cin>>q;
    while(q--)
    {
        cin>>a;
        bool found=true;
        if(found)
        {

                    for(int i=0;i<n;++i)
                {
                    for(int j=0;j<m;++j)
                    {
                        if(x[i][j]==a)
                        {
                            cout<<i<<" "<<j<<"\n";
                            found=false;
                        }
                    }

                }
        }
        if(found)
        {
            cout<<"-"<<1<<"-"<<1<<"\n";
        }

    }
    return 0;
}
