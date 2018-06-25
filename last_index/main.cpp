#include <iostream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int find_last_index(char s[],char pattern[]);
int main()
{
    char c;
    char str[100];int i=0;
    char pattern[]="ould";
    c=getche();
    while(c!=13|| i<100 )
    {
        str[i]=c;
        ++i;
        c=getche();
    }
    cout<<"The Last index is -:- "<<find_last_index(str,pattern);
    return 0;
}
int find_last_index(char s[],char pattern[])
{
    int i,j,k,pos=-1;
    for(i=0;s[i]!='\0';++i)
    {
        for(j=i,k=0;s[j]==pattern[k];++j,++k)
        {
            ;
        }
        if(k>0 && pattern[k]=='\0')
        {
            pos=i-j+1;
        }
    }
    return pos;
}
