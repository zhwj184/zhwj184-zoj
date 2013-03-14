#include<stdio.h>
#include<math.h>
main()
{
    int a[2000],b[2000],c[2000];
    float s[2000];
    char ch[2000];
    int i,j,k;
    int flag[2000];
    for(i=0;;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        if(a[i]==0&&b[i]==0&&c[i]==0){k=i;break;}
        if(c[i]==-1){s[i]=sqrt(a[i]*a[i]+b[i]*b[i]);ch[i]='c';flag[i]=1;}
        else if(a[i]==-1&&b[i]<c[i]){s[i]=sqrt(c[i]*c[i]-b[i]*b[i]);ch[i]='a';flag[i]=1;}
        else if(b[i]==-1&&a[i]<c[i]){s[i]=sqrt(c[i]*c[i]-a[i]*a[i]);ch[i]='b';flag[i]=1;}
        else flag[i]=0;
    }
    for(i=0;i<k;i++)
    {
        printf("Triangle #%d\n",i+1);

        if(flag[i])printf("%c = %.3f\n\n",ch[i],s[i]);
        else printf("Impossible.\n\n");

    }
}

