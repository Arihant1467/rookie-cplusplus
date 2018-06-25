#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long cats=0;long t=0;long i=0;
    cin>>cats;
    vector<long> strength;
    vector<long> calorie;
    for(;i<cats;++i)
    {
        cin>>t;
        strength.push_back(t);
    }
    t=0;i=0;
    for( ;i<cats;++i)
    {
        cin>>t;
        calorie.push_back(t);
    }
    sort(strength.begin(),strength.end());
    sort(calorie.begin(),calorie.end());
    t=0;i=0;
    for(;i<cats;++i)
    {
        t+=strength[i]*calorie[i];
    }
    cout<<t<<"\n";
    t=0;i=0;
    return 0;
}
