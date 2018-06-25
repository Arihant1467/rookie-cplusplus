#include <iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long test_cases=0; int products=0,shop=0;
    cin>>test_cases;int current_discount=0,discount=0;int maximum=0;

    while(test_cases--)
    {

        cin>>products;
        cin>>shop;
        while(products--)
        {
            vector<int> discounts;
            while(shop--)
            {
                for(int i=0;i<3;++i)
                {
                    cin>>discount;
                    current_discount+=discount;
                }
                discounts.push_back(current_discount);
            }
            maximum=0;
           maximum=* max_element(discounts.begin(),discounts.end());
            for(int j=0;j<discounts.size();++j)
            {
                if(maximum==discounts[j])
                {
                    cout<<j+1;
                }
            }
            discounts.clear();
            }
        cout<<"\n";
    }
}
