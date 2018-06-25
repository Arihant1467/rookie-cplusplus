#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int test_case=0,n_zombies=0,time_allowed=0,player_energy=0,required_energy_level=0,a=0;
    vector<int> zombie_energy;
    cin>>test_case;
    while(test_case--)
    {
        cin>>n_zombies>>time_allowed;
        while(n_zombies--)
        {
            cin>>a;
            zombie_energy.push_back(a);
        }
        cin>>player_energy>>required_energy_level;
        n_zombies=zombie_energy.size();
        a=0;
        if(n_zombies>=time_allowed)
        {
            cout<<"NO\n";
        }
        else
        {
            while(a<time_allowed)
            {
                if(zombie_energy[a]<=player_energy)
                {
                    player_energy=player_energy+(player_energy-zombie_energy[a]);
                    ++a;
                }
                else
                {
                    break;
                }
            }
            if(player_energy>=required_energy_level)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
