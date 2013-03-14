#include<queue>
#include <iostream>
#include<vector>
#include <stack>
using namespace std;

int main()
{
    int point[51][2];
    int S;
    int i,j,k,r;
    int H;
    
    int T;
    cin >> T;
    int flag;
    while(T--)
    {
        flag = 0;
        cin >> S >> H;
        for(i = 0; i < H; i++)
        {
            cin >> point[i][0] >> point[i][1];
        }
        for(i = 0; i <= S; i++)
        {
            for(j = 0; j <= S; j++)
            {
                r = i;
                if( S - i < r)
                    r = S - i;
                if( r > j)
                    r = j;
                if( r > S - j)
                    r = S - j;
                r = r * r;
                for( k = 0; k < H; k++)
                {
                    if( point[k][0] == i && point[k][1] == j)
                        break;
                    if( r < (point[k][0] - i) * ( point[k][0] - i)+ (point[k][1] - j) * ( point[k][1] - j))
                        break;
                }
                if( k == H)
                {
                    flag = 1;
                    break;
                }
            }
            if( flag )
                break;
        }
        if( flag)
            cout << i << " " << j << endl;
        else
            cout << "poodle" << endl;
    }
}
                    
                    
                    
                    
                    
