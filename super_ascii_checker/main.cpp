#include <iostream>

using namespace std;

//int ascii_check[26];
int alpha_count[26];
void ascii();
int main()
{
    ascii();
    int test_case=0,b;
    cin>>test_case;
    string s="";
    while(test_case--)
    {
        cin>>s;
        int p=s.length();
        for(int j=0;j<p;++j)
        {
            b=s[j]-97;
            alpha_count[b]=alpha_count[b]+1;
        }
        bool is_ascii_string=true;
        for(int  j=0;j<26;++j)
        {
            if(alpha_count[j]==j+1||alpha_count[j]==0)
            {
                continue;
            }
            else
                {
                    is_ascii_string=false;
                    break;
                }

        }
        if(is_ascii_string)
        {
            cout<<"YES\n";
        }
        else
            {
                cout<<"NO\n";
            }

    }
    return 0;
}
void ascii()
{
   for(int i=0;i<26;++i)
   {
       //ascii_check[i]=i;
       alpha_count[i]=0;
   }
}
