#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int parent[1001];
    int array[1001];
    int n,m,i,j,k;
    int a,b;
    while( cin >> n){
        memset(parent,-1,sizeof(parent));
        memset(array,0,sizeof(array));
        for(i=0;i<n;i++){
            b=m=0;
            scanf("%d:(%d)",&b,&m);
            //scanf(":(%d)",&m);
            for(j=0;j<m;j++){
                scanf("%d",&a);
                parent[a]= b;
            }
        }
        char ch;
        scanf("%d",&m);
            for(int s=0;s<m;s++){
                for(;(ch=getchar())!='(';);
                scanf("%d,%d)",&a,&b);
                for(k=a;k!=-1;k=parent[k]){
                    for(j=b;j!=-1;j=parent[j]){
                        if(j==k)
                            break;
                    }
                    if(j!=-1)
                        break;
                }
                array[k]++;
            }
            for(j=1;j<=n;j++)
                if(array[j]!=0)
                    printf("%d:%d\n",j,array[j]);
        }
        cin >> n;

}
                


