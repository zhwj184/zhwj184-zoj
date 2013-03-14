#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

char tr[12][12];
char gri[12][12];

int n;

int main()
{
    int x,y,z;
    int cas=0;
    int i,j;
    while((scanf("%d",&n))!=EOF){
        if(cas>0) printf("\n");
          cas++;
        getchar();
        memset(tr,'.',sizeof(tr));
        memset(gri,'.',sizeof(gri));
        for(i=1;i<=n;i++){
          for(j=1;j<=n;j++)
            scanf("%c",&gri[i][j]);
            getchar();
        }
        //getchar();
        int flag=0;
        for(i=1;i<=n;i++) {
            for(j=1;j<=n;j++){
                scanf("%c",&tr[i][j]);
                if(tr[i][j]=='x' && gri[i][j]=='*')
                    flag=1;
            }
            getchar();
         }

        //printf("flag=: %d\n",flag);
        /*if(flag) {
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++)
                    printf("%c",gri[i][j]);
                printf("\n");
            }
         }
         else { */
            for(i=1;i<=n;i++)
                for(j=1;j<=n;j++){
                    z=0;
                    for(x=-1;x<=1;x++)
                        for(y=-1;y<=1;y++)
                            if(gri[i+x][j+y]=='*')
                                z++;
                    if(tr[i][j]=='x')tr[i][j]=(z-0)+'0';
                }

            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++)
                    if(flag && gri[i][j]=='*') printf("*");
                    else  printf("%c",tr[i][j]);
                printf("\n");
            }



    }
}



















