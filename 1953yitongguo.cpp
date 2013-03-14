 # include<stdio.h>
# include<string.h>

# define N 100

int main()
{
    int i,j,k,p[N+1][N+1],max,min,temp;
    bool sign[N+1][N+1][N+1];
    char s1[N+1],s2[N+1],*pmax,*pmin;
    while (scanf("%s %s",s1,s2)==2)
    {
        max=strlen(s1);
        min=strlen(s2);
        if (max>=min)
        {
            pmax=s1;
            pmin=s2;
        }
        else
        {
            temp=max;
            max=min;
            min=temp;
            pmax=s2;
            pmin=s1;
        }
        for (i=0;i<=N;i++)
            p[i][0]=p[0][i]=0;
           for (i=0;i<=max;i++)
               for (j=0;j<=min;j++)
                   for (k=0;k<=min;k++)
                       sign[i][j][k]=false;
        for (i=1;i<=max;i++)
            for (j=1;j<=min;j++)
                if (pmax[i-1]==pmin[j-1])
                {
                    sign[i][j][j]=true;
                    p[i][j]=p[i-1][j-1]+1;
                    for (k=1;k<=j-1;k++)
                        if (sign[i-1][j-1][k])
                            sign[i][j][k]=true;
                }
                else
                {
                    if (p[i-1][j]>=p[i][j-1])
                    {
                        p[i][j]=p[i-1][j];
                        for (k=1;k<=j;k++)
                            if (sign[i-1][j][k])
                                sign[i][j][k]=true;
                    }
                    else
                    {
                        p[i][j]=p[i][j-1];
                        for (k=1;k<=j-1;k++)
                            if (sign[i][j-1][k])
                                sign[i][j][k]=true;
                    }
                }
          for (i=0,j=0;pmin[i]!='\0';i++)
          {
              if (sign[max][min][i+1])
              {
                  while (pmax[j]!=pmin[i])
                  {
                      printf("%c",pmax[j]);
                      j++;
                  }
                  j++;
              }
              printf("%c",pmin[i]);
          }
          for (;pmax[j]!='\0';j++)
                  printf("%c",pmax[j]);
            printf("\n");
    }
    return 0;
}
