#include <iostream.h>
struct window
{
        int x1,x2,y1,y2;
};
int inside(window *w,int n,int x,int y)
{
        int i;
        for (i=n-1;i>=0;i--)
                if (x>=w[i].x1&&x<=w[i].x2&&y>=w[i].y1&&y<=w[i].y2) break;
        return i;
}
int main()
{
        window w[10];
        int i,m,j,k,n;
        while (cin>>n,n>0)
        {
                for (i=0;i<n;i++) cin>>w[i].x1>>w[i].y1>>w[i].x2>>w[i].y2;
                cin>>m;
                for (i=0;i<m;i++)
                {
                        cin>>j>>k;
                        cout<<inside(w,n,j,k)<<endl;
                }
        }
        return 1;
}

