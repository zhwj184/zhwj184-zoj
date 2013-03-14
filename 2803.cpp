#include <iostream.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int cas;
    int wid,hei;
    int re[101],hh[101];
    int A[101][101];
    int dir[101];
    int i,j,k,m,n;
    char c,ch;
    int col,row;
    int rep,s,t;
    int x,y;
    int flag;
    cin >> cas;
    while(cas--)
    {
        cin >> wid >> hei;
        cin >> n >> m;
        for(i=0;i<wid;i++)
         for(j=0;j<hei;j++)
          A[i][j]=0;
        memset(dir,0,sizeof(dir));
        memset(re,0,sizeof(re));
        memset(hh,0,sizeof(hh));
        for(i=0;i<n;i++)
        {
            cin >> row >> col >> c;
            A[row-1][col-1]=i+1;
            re[i+1]=row-1;
            hh[i+1]=col-1;
            if(c=='E') dir[i+1]=0;
            else if(c=='W') dir[i+1]=2;
            else if(c=='N') dir[i+1]=1;
            else dir[i+1]=3;
        }
         flag=0;
        s=0;
        t=0;
        for(i=0;i<m;i++)
        {
           cin >> k >> ch >> rep;
           if(flag) continue;
            if(ch=='L') {for(j=0;j<rep;j++)dir[k]=(dir[k]+1)%4;}
            else if(ch=='R'){for(j=0;j<rep;j++) dir[k]=(dir[k]+3)%4;}
            else
            {
                A[re[k]][hh[k]]=0;
                if(dir[k]==0)
                {
                    for(j=1;j<=rep;j++)
                    {
                        if(A[re[k]+j][hh[k]]!=0&&re[k]+j<wid)
                        {
                            flag=2;
                            s=k;
                            t= A[re[k]+j][hh[k]];
                            break;
                        }
                    }
                    re[k]+=rep;
                    if(re[k]>=wid&&!flag){s=k;flag=1;}
                }
                else  if(dir[k]==2)
                {

                    for(j=1;j<=rep;j++)
                    {
                        if(A[re[k]-j][hh[k]]!=0&&re[k]-j>=0)
                        {
                            flag=2;
                            s=k;
                            t= A[re[k]-j][hh[k]];
                            break;
                        }
                    }
                       re[k]-=rep;
                       if(re[k]<0&&!flag){s=k;flag=1;}

                }
                else  if(dir[k]==3)
                {

                    for(j=1;j<=rep;j++)
                    {
                        if(A[re[k]][hh[k]-j]!=0&&hh[k]-j>=0)
                        {
                            flag=2;
                            s=k;
                            t= A[re[k]][hh[k]-j];
                            break;
                        }
                    }
                    hh[k]-=rep;
                    if(hh[k]<0&&!flag){s=k;flag=1;}

                }
                else  if(dir[k]==1)
                {
                    for(j=1;j<=rep;j++)
                    {
                       if(A[re[k]][hh[k]+j]!=0&&hh[k]+j<hei)
                        {
                            flag=2;
                            s=k;
                            t= A[re[k]][hh[k]+j];
                            break;
                        }
                    }
                     hh[k]+=rep;
                     if(hh[k]>=hei&&!flag){s=k;flag=1;}
                }
               if(!flag)
               A[re[k]][hh[k]]=k;
            }
           }
           if(flag==0) cout << "OK" << endl;
           else if(flag==2) cout << "Robot " << s << " crashes into robot " << t << endl;
           else if(flag==1) cout << "Robot " << s << " crashes into the wall" << endl;

    }
}
                

        

    
