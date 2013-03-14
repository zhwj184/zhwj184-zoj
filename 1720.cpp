#include <iostream.h>
#include <math.h>
#include <string>
int main()
{
    int A[10];
    int count;
    int i,j,k,m,n;
    i=0;
    int f;
    while(cin>>A[0])
    {
        for(i=1;i<9;i++)
          cin >> A[i];
        for(i=0;i<9;i++)
        if(A[i]!=0){f=i;break;}

        count=8;
        int flag=1;

        for(i=0;i<9;i++)
        {
            if(i==8&&A[i]!=0){flag=0;if(A[i]<0)cout<<" - "<<abs(A[i]);else cout<<A[i];}
            else if(A[i]==1&&i==0){ cout << "x^" <<count;flag=0;}
            else if(A[i]==1&&i!=0){ if(f!=i)cout<<" + ";if(i==7)cout<<"x";else cout << "x^" <<count;flag=0;}
            else if(A[i]==-1){cout << " - x^"<<count;flag=0;}
            else if(A[i]>0&&i!=8){ cout <<" + " << A[i] << "x";if(i!=7)cout<<"^"<<count;flag=0;}
            else if(A[i]<0&&i!=8){if(!flag)cout << " - " <<abs(A[i]) <<"x";
                                  else cout<<A[i]<<"x";
                                 if(i!=7)cout<<"^"<<count;flag=0;}
            count--;
        }
        if(flag)cout<<"0"<<endl;
        else
         cout<<endl;
    }
}

#include "iostream"

using namespace std;

//2006-12-05 01:44:17 Accepted 1720 C++ 00:00.00 840K Time Limit Exceeded
//Ä£ÄâÌâ

int main ()
{
    int d[10];
    int i,j;
    memset(d,0,sizeof(d));
    for(;scanf("%d%d%d%d%d%d%d%d%d",&d[8],&d[7],&d[6],&d[5],&d[4],&d[3],&d[2],&d[1],&d[0])!=EOF;)
    {
        for(i=8;i>=1;i--)
            if(d[i]!=0)
                break;
        if(i>0)
        {
            if(d[i]>0)
            {
                if(d[i]==1)
                    printf("x");
                else
                    printf("%dx",d[i]);
            }
            else
            {
                if(d[i]==-1)
                    printf("-x");
                else
                    printf("%dx",d[i]);
            }

            if(i!=1)
                printf("^%d",i);

            for(j=i-1;j>1;j--)
            {
                if(d[j]==0)continue;
                if(d[j]>0)
                {
                    if(d[j]==1)
                        printf(" + x^%d",j);
                    else
                        printf(" + %dx^%d",d[j],j);
                }
                else
                {
                    if(d[j]==-1)
                        printf(" - x^%d",j);
                    else
                        printf(" - %dx^%d",-d[j],j);
                }
            }

            if(i!=1)
            {
                if(d[1]>0)
                {
                    if(d[1]!=1)
                       printf(" + %dx",d[1]);
                    else
                        printf(" + x");
                }
                else
                    if(d[1]<0)
                    {
                        if(d[1]!=-1)
                            printf(" - %dx",-d[1]);
                        else
                            printf(" - x");
                    }
            }

            if(d[0]>0)
                printf(" + %d",d[0]);
            else
                if(d[0]<0)
                    printf(" - %d",-d[0]);
            printf("\n");
        }
        else
        {
            printf("%d\n",d[0]);
        }

    }
    return 1;
}



