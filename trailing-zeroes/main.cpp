#include <iostream>

using namespace std;

int main()
{
    long test_case=0;signed long number;signed long num;
    cin>>test_case;
    while(test_case--)
    {
        number=0;
        num=1;
        cin>>number;
        for(long i=2;i<=number;++i)
        {
            num*=i;

        }
        cout<<num;
        int trailing_zeroes=0;
        bool cont=true;

        while(cont)
        {
            if(num%10==0)
            {
                ++trailing_zeroes;
                num=num/10;
            }
            else
                {
                    cont=false;
                }
            cout<<trailing_zeroes<<"\n";
        }
    }
    return 0;
}
