#include <iostream.h>
#include <stdio.h>
int main()
{
    int D[51],A[51],B[51];
    int p,c;
    int num,cou;
    int i,j;
    while(cin >> num >> cou &&(num | cou))
    {
       for(i=num,j=0;i>0;i--,j++)
       D[j]=i;

        while( cou--)
        {
            cin >> p >> c;
            for(i=0;i<p-1;i++)
            A[i]=D[i];
            for(j=p-1;j<p+c-1;j++)
            A[j]=D[j];
            for(i=0;i<c;i++)
            D[i]= A[p-1+i];
            for(i=c;i<c+p-1;i++)
            D[i]=A[i-c];
        }
        cout << D[0] << endl;
    }
}

