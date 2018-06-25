// vector::push_back
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  std::vector<int> myvector;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    myvector[0].push_back(myint);
  } while (myint);

  cout<<"myvector\n";
  for(int i=0 ;i<myvector.size();++i)
  {
      cout<<myvector[i]<<" ";
  }

  return 0;
}
