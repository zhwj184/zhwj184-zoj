#include<stdio.h>
#define MAX 500
int main()
{
    int i,j;
    int t=17,tag;
    int base[MAX],num[MAX];
    for(i=2;i<=t;i++) base[i]=i*i;

    for(i=0;i<MAX;i++)
            num[i]=1;        //1Ϊ������λ��Ԥ����ã������Ϊ�㣬��������

    for(i=2;i<=t;i++)
    {
        for(j=base[i];j<MAX;j++)
        {
            num[j]+=num[j-base[i]];
        }
    }

    while(scanf("%d",&tag)!=EOF&&tag)
    {
        printf("%d\n",num[tag]);
    }
    return 0;
}
