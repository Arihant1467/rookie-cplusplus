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
    int c=a%b;
    a=a+c;
    string crc=bitset<8>(a).to_string();// binary representation of negative makes its 2`s complement
    cout<<"\nThe CRC code is:\t"<<crc;
    return 0;
}
