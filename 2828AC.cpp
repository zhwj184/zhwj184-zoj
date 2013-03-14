#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define swap(a,b) {a = a ^ b; b = b ^ a; a = a ^ b;}
char dic[101][21];
int cmp(const void* a,const void* b)
{
    return strcmp((char*)a,(char*)b);
}
void solve()
{
    int cnt1,cnt2,cnt3 = 0,i,j;
    char w[21],res[101][21];
    scanf("%d",&cnt1);
    for(i = 0; i < cnt1; i++)
        scanf("%s",&dic[i]);
    qsort(dic,cnt1,sizeof(dic[0]),cmp);
    scanf("%d",&cnt2);
    for(i = 0; i < cnt2; i++)
    {
        scanf("%s",&w);
        int len = strlen(w);
        char *t = (char*)bsearch(w,dic,cnt1,sizeof(dic[0]),cmp);
        if(t != NULL)
        {
            puts(w);
            continue;
        }
        cnt3 = 0;
        for(j = 0; j < len - 1; j++)
        {
            swap(w[j],w[j + 1]);
            t = (char*)bsearch(w,dic,cnt1,sizeof(dic[0]),cmp);
            if(t != NULL)
                strcpy(res[cnt3++],t);
            swap(w[j],w[j + 1]);
        }
        if(cnt3 == 0)
            puts(w);
        else
        {
            qsort(res,cnt3,sizeof(res[0]),cmp);
            for(j = 0; j < cnt3; j++)
                j != 0 ? printf(",%s",res[j]) : printf("%s",res[j]);
            putchar(10);
        }
    }
}
int main()
{
    int t;
    while(scanf("%d",&t) != EOF)
        while(t--)
        {
            solve();
            if(t != 0)
                putchar(10);
        }

}


//
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	char word[202][21];
	char test[21];
	char res[31];
	int i,j,m,n;
	int cas;
	int count;
	int flag[202];
	int len1,len2,p,q;
	char resu[202][21];
	char t;
	int f;
	while(cin >> cas)
	{
	while(cas--)
	{
		cin >> m;
		for(i=0;i<m;i++)
			cin >> word[i];
		cin >> n;
		count=0;
		memset(flag,0,sizeof(flag));
		while(n--)
		{
			f=0;
			cin >> test;
			len1=strlen(test);
			count=0;
			for(i=0;i<m;i++)
			{
				strcpy(res,test);
				if(strcmp(res,word[i])==0)
				{
					f=1;
					break;
				}
				else
				{
					for(j=1;j<len1;j++)
					{
						t=res[j-1];
						res[j-1]=res[j];
						res[j]=t;
						if(strcmp(res,word[i])==0)
						{
							flag[i]=1;
							strcpy(resu[count],word[i]);
							count++;
							break;
						}
						t=res[j-1];
						res[j-1]=res[j];
						res[j]=t;
					}
				}
			}
			if(f==1) cout << test << endl;
			else
			{
				if(count==1) cout << resu[0] << endl;
				else if(count==0) cout << test << endl;
				else
				{
					for(p=0;p<count-1;p++)
						for(q=p+1;q<count;q++)
							if(strcmp(resu[p],resu[q])>0)
							{
								strcpy(res,resu[p]);
								strcpy(resu[p],resu[q]);
								strcpy(resu[q],res);
							}
					//cout << j << endl;
					for(p=0;p<count;p++)
					  p != 0 ? printf(",%s",resu[p]) : printf("%s",resu[p]);
						//cout << resu[p] << ",";
					cout << endl;
				}
			}
		}
		if(cas>0) cout << endl;
	}
	}

}
