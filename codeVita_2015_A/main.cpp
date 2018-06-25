#include <iostream>

using namespace std;

int main()
{
    int test_case=0,ch;
     long f,b,t,fd,bd,y,time;
    time=f=b=t=fd=bd=y=0;
    cin>>test_case;
    while(test_case--)
    {
        cin>>f>>b>>t>>fd>>bd;
        if(b>=bd)
        {
           y=bd;
            ch=1;
        }
        else if(b>f )
        {
         y=bd;
         ch=1;

        }
        else if(f==b && f<fd && b<bd)
        {
            ch=4;
        }
        else if(f==b)
        {
            if(b>=bd)
            {
                y=bd;ch=1;
            }
            else
            {
                y=fd;ch=0;
            }
        }
        else if(f>=fd && b<bd)
        {
            y=fd;
            ch=0;
        }
        else if(f>b)
        {
            ch=0;
            y=fd;
        }

        switch(ch)
        {
        case 0:
                    y+=b;
                    time+=b*t;
                    while(true)
                    {
                        if(f>=y)
                        {
                            time+=y*t;
                            cout<<time<<" "<<"F\n";
                            break;
                        }
                        else
                        {
                            y-=f;
                            time+=f*t;
                            y+=b;
                            time+=b*t;

                        }

                    }
                    break;

        case 1:
                    while(true)
                    {

                        if(b>=y)
                        {
                            time+=y*t;
                            cout<<time<<" "<<"B\n";
                            break;
                        }
                        else
                        {
                            y-=b;
                            time+=b*t;
                            y+=f;
                            time+=f*t;

                       }

                    }
                    break;
        case 4: cout<<"Thank God\n";
                break;
        }
        time=f=b=t=fd=bd=y=0;
    }
    return 0;
}
