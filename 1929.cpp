#include <iostream.h>
#include <stdio.h>
long long r,m;
int i,j,b,k,n;
void red(int r)
{
    if(!r) return ;
    red(r/b);
    printf("%d",r%b);
}

int main()
{
    char p[2000],M[10];
    while(cin >> b && b!=0)
    {
        cin >> p >> M;
        m=0;
        for(i=0;M[i];i++)
          m=m*b+(M[i]-'0');
        r=0;
        for(i=0;p[i];i++)
        {
            r=r*b+(p[i]-'0');
            r%=m;
        }
        if(!r) printf("0");
        red(r);
        printf("\n");
    }
}


