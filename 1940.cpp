#include<queue>
#include <iostream>
#include<vector>
#include <stack>
using namespace std;

struct node
{
    int x,y,z;
    int step;
};
char map[51][51][51];
int n,w,h;

int search(int sx,int sy,int sz, int ex,int ey,int ez)
{
   //  cout << sx << " " << sy << " " << sz << endl;
   //  cout << ex << " " << ey << " " << ez << endl;
    int step;
    node n1,n2;
    queue<node> qs;
    n1.x = sx;
    n1.y = sy;
    n1.z = sz;
    n1.step = 0;
    qs.push(n1);
    map[sx][sy][sz]='#';
    int temp = 1;
    int num;
    step = 0;
    for(;!qs.empty();)
    {
       // step++;
      //  num=temp;
       // for(int i=0,temp = 0; i < num; i++)
      //  {
            n2=qs.front();
            qs.pop();

            if(n2.x == ex && n2.y == ey && n2.z == ez)
            {
                //return  step-1;
                return n2.step;
            }
            if(n2.x > 0 && map[n2.x-1][n2.y][n2.z]=='.')
            {

                 n1.x = n2.x-1;
                 n1.y = n2.y;
                 n1.z = n2.z;
                 n1.step = n2.step + 1;
                 qs.push(n1);
                 map[n2.x-1][n2.y][n2.z]= '#';
                 temp++;
               // cout << n1.x << " " << n1.y << " " << n1.z << endl ;
            }
            if(n2.y > 0 && map[n2.x][n2.y-1][n2.z]=='.')
            {

                 n1.x = n2.x;
                 n1.y = n2.y-1;
                 n1.z = n2.z;
                 n1.step = n2.step + 1;
                 qs.push(n1);
                 map[n2.x][n2.y-1][n2.z]= '#';
                 temp++;
                // cout << n1.x << " " << n1.y << " " << n1.z << endl ;
            }
            if(n2.z > 0 && map[n2.x][n2.y][n2.z-1]=='.')
            {

                 n1.x = n2.x;
                 n1.y = n2.y;
                 n1.z = n2.z - 1;
                 n1.step = n2.step + 1;
                 qs.push(n1);
                 map[n2.x][n2.y][n2.z-1]= '#';
                 temp++;
               //  cout << n1.x << " " << n1.y << " " << n1.z << endl ;
            }
            //cout << map[n-1][w-1][h-1] << endl;
            if(n2.x < n-1 && map[n2.x+1][n2.y][n2.z]=='.')
            {
                 //cout << n2.x << " " << n2.y << " " << n2.z << endl;
                // cout << "enter" << endl;
                 n1.x = n2.x+1;
                 n1.y = n2.y;
                 n1.z = n2.z;
                 n1.step = n2.step + 1;
                 qs.push(n1);
                 map[n2.x+1][n2.y][n2.z]= '#';
                 temp++;
                // cout << n1.x << " " << n1.y << " " << n1.z << endl ;
            }
            if(n2.y < w-1 && map[n2.x][n2.y+1][n2.z]=='.')
            {

                 n1.x = n2.x;
                 n1.y = n2.y+1;
                 n1.z = n2.z;
                 n1.step = n2.step + 1;
                 qs.push(n1);
                 map[n2.x][n2.y+1][n2.z]= '#';
                 temp++;
                // cout << n1.x << " " << n1.y << " " << n1.z << endl ;
            }
            if(n2.z < h - 1 && map[n2.x][n2.y][n2.z+1]=='.')
            {

                 n1.x = n2.x;
                 n1.y = n2.y;
                 n1.z = n2.z+1;
                 n1.step = n2.step + 1;
                 qs.push(n1);
                 map[n2.x][n2.y][n2.z+1]= '#';
                 temp++;
                // cout << n1.x << " " << n1.y << " " << n1.z << endl ;
            }
            // cout << qs.empty() << endl;


           // cout << temp << endl;
       // }
    }
    return -1;
}

int main()
{
    int i,j,k;
    node start,end;
    while(cin >> n >> w >> h )
    {
        if(n == 0 && w == 0 && h == 0)
            break;
        for(i = 0; i < n; i++)
            for(j = 0; j < w; j++)
                for(k = 0; k < h; k++)
                {
                    cin >> map[i][j][k];
                    if(map[i][j][k] == 'S')
                    {
                        start.x = i;
                        start.y = j;
                        start.z = k;
                       // cout << i << " " << j << " " << k << endl;
                    }
                    else if(map[i][j][k] == 'E')
                    {
                        end.x = i;
                        end.y = j;
                        end.z = k;
                       // cout << i << " " << j << " " << k << endl;
                    }
                }
        map[end.x][end.y][end.z]='.';
         int res = search(start.x ,start.y,start.z,end.x,end.y,end.z);
         if(res >= 0)
         {
            cout << "Escaped in " << res << " minute(s)." << endl;
         }
         else
            cout << "Trapped!" << endl;
    }
}
