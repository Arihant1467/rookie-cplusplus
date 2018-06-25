#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{

    int test=0;
    long index=0;
    string a=NULL;
    cin>>test;
    while(test--)
    {
        string b=NULL,c=NULL;
        cin>>a;
        cin>>index;
        long len=a.length();
        long i=1;
        for(;i<len;++i)
        {
           b=a.substr(0,i);
           c=a.substr(abs(len-1-i),len-1);

           if(b==c)
           {
               continue;
           }
           else
           {
               break;
           }
        }
        long l=i-1;
        if(l>index)
        {
            cout<<"\nPuchi is a cheat!";
        }
        else
        {
            bool ok=false;
            do
            {

              if(a.substr(0,l)==a.substr(l,i))
              {
                  ok=true;
                  break;
              }
              else
              {
                  ++i;
              }

            }while(i<=index);
            if(ok)
            {
                cout<<a.substr(0,l)<<"\n";
            }
            else
            {
                cout<<"\nPuchi is a cheat!";
            }
        }

    }
    return 0;
}
