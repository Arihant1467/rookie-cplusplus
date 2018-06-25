#include <iostream>

using namespace std;

int main()
{

    long a=0,b=0,testcase=0;
    cin>>testcase;
    long prime=0;
    for(long i=0;i<testcase;++i)
    {

        cin>>a>>b;
        for(long j=a;j<=b;++j)
        {

            for(long k=2;k<a/2;++k)
            {
                if(j%k==0)
                {
                  break;
                }
                else
                {
                    ++prime;
                }
            }
        }
        cout<<prime;
        double prob=prime/(1000000);
        cout<<prob;
        prime=0;

    }
    return 0;
}
