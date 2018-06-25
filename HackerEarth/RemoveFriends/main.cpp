#include <iostream>
#include<vector>
#include<limits>
using namespace std;
int main()
{
    int t,n=0,k=0;
    vecotor<int> v;
    while(t--)
    {
        cin>>n>>k;
        int t=0;
        while(n--)
        {
          cin>>t;
          v.push_back(t);
        }
        for(int i=0;i<k;++i)
        {
            bool deleteFriend=false;
            int deleted friends=0;
            for(int j=0;j<v.size();++j)
            {
                if(v[j]<v[j+1])
                {
                    v[j]=INT_MIN;

                    deleteFriend=true;
                }
            }

        }
    }
    return 0;
}
