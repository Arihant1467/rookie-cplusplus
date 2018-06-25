#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int test_case=0,questions=0,n=0;
    float k=0;
    cin>>test_case;
    while(test_case--)
    {
        cin>>questions;
        if(questions%2!=0)
        {
            cout<<"-1"<<"\n";
        }

        else
        {
            while(true)
            {
                k=(questions-10*n)/12;
                if(k==ceil(k))
                {
                    cout<<k+n+1<<"\n";
                    break;
                }
                else
                {
                    ++n;
                }
            }
        }
    }
    return 0;
}
