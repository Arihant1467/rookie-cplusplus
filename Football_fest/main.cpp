#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int test_cases=0;
    long no_of_passes=0,initial_player_id=0,previous_player_id=0,current_player_id=0;
    char type_of_pass='P';
    cin>>test_cases;
    while(test_cases--)
    {
        cin>>no_of_passes;
        cin>>initial_player_id;
        current_player_id=initial_player_id;
        while(no_of_passes--)
        {
            cin>>type_of_pass;
            if(type_of_pass=='P')
            {
                cin>>initial_player_id;
                previous_player_id=current_player_id;
                current_player_id=initial_player_id;
            }
            if(type_of_pass=='B')
            {
                swap(current_player_id,previous_player_id);
            }
        }
        cout<<"Player "<<current_player_id<<"\n";
    }
    return 0;
}
