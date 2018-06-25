#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string s1="";


    ofstream of2("file.txt",ios::out|ios::ate);
    of2<<"13F82F\n";
    of2<<"20055";
       /*     42F6F
            9153
            13F80F
            20058
            4206957F
            91F3055
            4206F
            91F3*/
            of2.close();
            ifstream if1("file.txt",ios::in);
    while(!if1.eof())
    {
        string s2,s3,s4;
        getline(if1,s2);
        getline(if1,s3);

        int i=0,count_f=0;
        bool cond=true;
        while(cond)
        {

            if(s2.at(i)=='f')
            {
                 ++count_f;
                if(count_f==2)
                {
                    cond=false;
                    break;
                }
               s4.append("|");

            }
           else  if(s3.at(i)=='f')
            {
                ++count_f;
                s4.push_back(s2[i]);
                s4.append("|");
            }
            /*if(s2[i]=='f'||s3[i]=='f')
            {
                ++count_f;
                if(count_f==2)
                {
                    cond=false;
                    break;
                }
                s4+="|"+;

            }*/

            else
            {
               // s4=s4+s2[i]+s3[i];
                s4.push_back(s2[i]);
               s4.push_back(s3[i]);
                ++i;
            }


        }

    cout<<s4;

    }
    return 0;
}
