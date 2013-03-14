#include <iostream.h>
#include <stdio.h>
int main()
{
    int r,c,count;
    int cas;
    char a[500][500],b[500][500];
    int i,j,k,s,t;
    int p,q;
    cin >> cas;
    while(cas--)
    {
        cin >> r >> c >> t;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin >> a[i][j];
                b[i][j]=a[i][j];
            }
        }

        for(i=0;i<t;i++)
        {
            for(j=0;j<r;j++)
            {
                for(k=0;k<c;k++)
                {
                    if(a[j][k]=='S')
                    {
                        if(j-1>=0&&a[j-1][k]=='P')
                        {
                            b[j-1][k]='S';
                        }
                        if(j+1<r&&a[j+1][k]=='P')
                        {
                            b[j+1][k]='S';
                        }
                        if(k-1>=0&&a[j][k-1]=='P')
                        {
                            b[j][k-1]='S';
                        }
                        if(k+1<c&&a[j][k+1]=='P')
                        {
                            b[j][k+1]='S';
                        }
                    }
                    else if(a[j][k]=='P')
                    {
                        if(j-1>=0&&a[j-1][k]=='R')
                        {
                            b[j-1][k]='P';
                        }
                        if(j+1<r&&a[j+1][k]=='R')
                        {
                            b[j+1][k]='P';
                        }
                        if(k-1>=0&&a[j][k-1]=='R')
                        {
                            b[j][k-1]='P';
                        }
                        if(k+1<c&&a[j][k+1]=='R')
                        {
                            b[j][k+1]='P';
                        }
                    }
                    else if(a[j][k]=='R')
                    {
                        if(j-1>=0&&a[j-1][k]=='S')
                        {
                            b[j-1][k]='R';
                        }
                        if(j+1<r&&a[j+1][k]=='S')
                        {
                            b[j+1][k]='R';
                        }
                        if(k-1>=0&&a[j][k-1]=='S')
                        {
                            b[j][k-1]='R';
                        }
                        if(k+1<c&&a[j][k+1]=='S')
                        {
                            b[j][k+1]='R';
                        }
                    }
                }
           }
              for(p=0;p<r;p++)
              {
                for(q=0;q<c;q++)
                {
                    a[p][q]=b[p][q];
                }
              }

        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        if(cas>0) cout << endl;
        }

}
            
                    
