#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int test_case;string s;
    cin>>test_case;
    while(test_case--)
    {
        cin>>s;
        signed long  l=s.length();
        for(signed long i=0;i<s.length();++i)
        {
            for(signed long j=i+1;j<s.length();++j)
            {
                string s1=s.substr(i,j);
                string s2(s1);
                reverse(s1.begin(),s1.end());
                if(s2==s1)
                {
                    ++l;
                }
            }
        }
        cout<<l-1<<"\n";
        s="";
    }
    return 0;
}
