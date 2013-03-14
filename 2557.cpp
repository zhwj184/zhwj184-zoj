#include <iostream.h>
#include <stdio.h>
int main()
{
    float k,s,w,l;
    const float g=9.81;
    int i,j,m,n;
    while(cin >> k >> l >> s >> w)
    {
        if(k==0&&l==0&&s==0&&w==0)
                break;
        if(l >= s)
        {
            if(g*s >100.0/2)cout<<"Killed by the impact.\n";
            else cout<<"James Bond survives.\n";
        }
        else
        {
            if(0.5*k*(s-l)*(s-l)>w*g*s)cout<<"Stuck in the air.\n";
            else if(0.5*k*(s-l)*(s-l)+0.5*w*100>w*g*s)cout<<"James Bond survives.\n";
            else cout << "Killed by the impact.\n";
        }
    }
}

