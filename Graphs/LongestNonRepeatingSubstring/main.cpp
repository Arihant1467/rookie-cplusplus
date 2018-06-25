#include <iostream>



using namespace std;

int main()
{
    char str[] = {'p','w','w','k','e','w'};
    int i=0,max_len=1,curr_len=1,lnr_i=0,lnr_j=1;
    int present[26];
    for(int m=0;m<26;++m){
        present[m] = -1;
    }
    present[str[i]-'a'] = 1;
    int k=1;
    while(k<6){
        // checks whether its is present in LongestNonRepeatingSubstring
        if(present[str[k]-'a'] == -1){
            present[str[k]-'a'] = 1;
            ++curr_len;
            cout<<"k-"<<k<<endl;
            cout<<"curr-len-"<<curr_len<<endl;
        }   // If not present do this
        else{
            if(max_len<curr_len){
                max_len = curr_len;
                present[str[i]-'a'] = -1;
                lnr_i = i;
                lnr_j = k-1;
                ++i;
                cout<<"k-"<<k<<endl;
            }
        }
        ++k;
    }
    cout<<"lnr_j : "<<lnr_j<<endl;
    cout<<"lnr_i : "<<lnr_i<<endl;
    for(int h=lnr_i;h<=lnr_j;++h){
        cout<<str[h];
    }
    return 0;
}
