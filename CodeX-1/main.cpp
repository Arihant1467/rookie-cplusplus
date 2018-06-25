#include <iostream>

using namespace std;

int main()
{
    int test_cases=0;
    long numbers_in_sequence=0,the_number=0,the_next_number=0,the_comparison=0;
    cin>>test_cases;
    while(test_cases--)     // no.of test cases
    {
        the_comparison=0;
        cin>>numbers_in_sequence;   // no.of numbers in a test case
        cin>>the_number;
        numbers_in_sequence--;
        while(numbers_in_sequence--)
        {
            //cin>>the_number;

            cin>>the_next_number;
            if(the_next_number<=the_number)
            {
                ++the_comparison;
            }
            the_number=the_next_number;
        }
        cout<<the_comparison<<"\n";
    }
    return 0;
}
