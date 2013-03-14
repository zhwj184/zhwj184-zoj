#include <iostream.h>
#include <stdio.h>
char grid[3][4];

int win(char c)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3&&grid[i][j]==c;j++);
        if(j==3) return 1;
        for(j=0;j<3&&grid[j][i]==c;j++);
        if(j==3) return 1;
    }
    for(i=0;i<3&&grid[i][i]==c;i++);
     if(i==3) return 1;
    for(i=0;i<3&&grid[i][2-i]==c;i++);
     if(i==3) return 1;
    return 0;
}
int main()
{


    int cas;
    int i,j,k;
   // scanf("%d",&cas);
    cin >> cas;
    int x,o;
    while(cas--)
    {
        x=0;
        o=0;
        scanf(" %s %s %s",grid[0],grid[1],grid[2]);
        for(i=0;i<3;i++)
         for(j=0;j<3;j++)
          {
         //  cin >> grid[i][j];
           if(grid[i][j]=='X') x++;
           if(grid[i][j]=='O') o++;
          }
        if(x<o||x>o+1||(win('X')&&win('O'))
           ||(win('X')&&x==o)||(win('O')&&x!=o))
        {
          //  printf("no\n");
        cout << "no" << endl;
         continue;
        }
       // printf("yes\n");
         cout << "yes" << endl;
    }
    return 0;
}
        




