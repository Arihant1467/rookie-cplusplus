#include <iostream>

using namespace std;

int main()
{
    int test_case=0;string s;int k;
    cin>>test_case;
    while(test_case--)
    {
        s="";
        k=0;
        cin>>k;
        cin>>s;
        k=k%26;
        for(long i=0;i<s.length();++i)
        {
            int b=s[i];
            //char a;
            if(b>96&&b<123)
            {
                b=s[i]+k;
                if(b>122)
                {
                   b=96+b-122;
                }
                  char a=b;
                cout<<a;
            }
            else if(b>64&&b<91)
            {
                b=s[i]+k;
                if(b>90)
                {
                    b=64+b-90;
                }
                  char a=b;
                  cout<<a;
            }

            else
                {
               char a=s[i]+k;
            cout<<a;
            }
        }
        cout<<"\n";
    }
    return 0;
}
