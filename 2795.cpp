#include <iostream.h>
#include <assert.h>
int main()
{
    bool A[200001];
    int B[200001];
    int i,j,k;
    int n;
    while(cin >> n )
    {
        if(n==0) break;
       // assert(n>0&&n<=10000);
        for(i=1;i<=n;i++)
        A[i]= false ;
        int s=0;
        for(i=1;i<=n;i++)
        {
            cin >> B[i];
           // assert(A[B[i]]==false);
            A[B[i]]==true;

        }
        for(i=1;i<=n;i++)
        {
        if(B[B[i]]!=i){
            s=1;
         cout <<"not ambiguous"<< endl;
         break;
        }
        }
        if(s!=1) cout << "ambiguous" << endl;

    }
}
         
