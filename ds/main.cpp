#include <iostream>
using namespace std;
int main()
{
  int first=0;
  int second=1;
  int s=0;
  int n=0;
  cin>>n;
  n=n-2;
  for(int i=0;i<n;++i)
  {
     s=first+second;
     cout<<s<<",";
     first=second;
     second=s;
  }
  return 0;
}

