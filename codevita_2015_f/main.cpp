#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    vector<vector< long> > matrix;
    vector<long> line; int dimension;
    long p; unsigned long long t=1; long  s=1000000007;
    cin>>dimension;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            cin>>p;
            line.push_back(p);
        }
        matrix.push_back(line);
        line.clear();
    }
    p=0;
    cin>>p;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            t*=pow(matrix[i][j],p);

        }

    }
    cout<<t%s;

    return 0;
}
