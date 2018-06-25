#include <iostream>
#include<bitset>
#include<math.h>
using namespace std;
int main()
{
     int a,b;
    cout<<"Enter 2 decimal numbers which can be represented using 8-bit representation :\n";
    cin>>a>>b;
    string a_bin= bitset<8>(a).to_string();// converting numbers to binary
    string b_bin= bitset<8>(b).to_string();
    cout<<"\n Binary value of :"<<a<<"\t"<<a_bin;
    cout<<"\n Binary value of :"<<b<<"\t"<<b_bin;
    a=a+b;
    a=a-2*a;// converting into a negative number
    string check_sum=bitset<8>(a).to_string();// binary representation of negative makes its 2`s complement
    cout<<"\nThe check sum is:\t"<<check_sum;
    return 0;
}
