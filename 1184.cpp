/* Copyright Derek Kisman (ACM ICPC ECNA 98) */


int w[3][2][12];
int b[3];
char buff[1000];

main() {
	char ch;
	int i, j, k, x, y, z, n;

	scanf( " %d", &n );
	for( ; n > 0; n-- ) {
		for( i = 0; i < 3; i++ ) {
			for( j = 0; j < 2; j++ ) {
				for( k = 0; k < 12; k++ ) w[i][j][k] = 0;
				scanf( " %s", buff );
				for( k = 0; buff[k]; k++ ) w[i][j][buff[k]-'A'] = 1;
			}
			scanf( " %s", buff );
			if( *buff == 'e' ) {
				b[i] = 0;
			} else if( *buff == 'u' ) {
				b[i] = -1;
			} else {
				b[i] = 1;
			}
		}

		for( i = 0; i < 12; i++ ) {
			for( j = -1; j <= 1; j += 2 ) {
				for( k = 0; k < 3; k++ ) {
					x = 0;
					if( w[k][0][i] ) x -= j;
					if( w[k][1][i] ) x += j;
					if( x != b[k] ) break;
				}
				if( k == 3 ) goto solved;
			}
		}
solved:
		printf( "%c is the counterfeit coin and it is ", i+'A' );
		if( j < 1 ) printf( "light.\n" ); else printf( "heavy.\n" );
	}
}

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{

	int A[20];
	int t;
	char s1[4][5],s2[4][5];
	int i,j,k,m,n;
	char s[3][5];
	char ch;
	int w;
	cin >> t;
	int flag;
	while( t--)
	{	
		for(k=0;k<3;k++)
		{
				cin >> s1[k] >> s2[k];
				cin >> s[k];
		}
		for(i=0;i<12;i++)
		{
			flag=0;
			for(j=0;j<12;j++)
				A[j]=1;
			A[i]=0;
			for(k=0;k<3;k++)
			{
				if((strcmp(s[k],"even"))==0)
				{
					if(A[s1[k][0]-'A']+A[s1[k][1]-'A']+A[s1[k][2]-'A']+A[s1[k][3]-'A']!=
                       A[s2[k][0]-'A']+A[s2[k][1]-'A']+A[s2[k][2]-'A']+A[s2[k][3]-'A'])
		             flag=1;
				}
				else if((strcmp(s[k],"up"))==0)
				{
					if(A[s1[k][0]-'A']+A[s1[k][1]-'A']+A[s1[k][2]-'A']+A[s1[k][3]-'A']<=
                       A[s2[k][0]-'A']+A[s2[k][1]-'A']+A[s2[k][2]-'A']+A[s2[k][3]-'A'])
		             flag=1;
				}
				else if((strcmp(s[k],"down"))==0)
				{
					if(A[s1[k][0]-'A']+A[s1[k][1]-'A']+A[s1[k][2]-'A']+A[s1[k][3]-'A']>=
                       A[s2[k][0]-'A']+A[s2[k][1]-'A']+A[s2[k][2]-'A']+A[s2[k][3]-'A'])
		             flag=1;
				}
				if(flag==1)break;
			}
			if(k==3){ch='A'+i;w=0;break;}
			flag=0;
			A[i]=2;
			for(k=0;k<3;k++)
			{
				if((strcmp(s[k],"even"))==0)
				{
					if(A[s1[k][0]-'A']+A[s1[k][1]-'A']+A[s1[k][2]-'A']+A[s1[k][3]-'A']!=
                       A[s2[k][0]-'A']+A[s2[k][1]-'A']+A[s2[k][2]-'A']+A[s2[k][3]-'A'])
		             flag=1;
				}
				else if((strcmp(s[k],"up"))==0)
				{
					if(A[s1[k][0]-'A']+A[s1[k][1]-'A']+A[s1[k][2]-'A']+A[s1[k][3]-'A']<=
                       A[s2[k][0]-'A']+A[s2[k][1]-'A']+A[s2[k][2]-'A']+A[s2[k][3]-'A'])
		             flag=1;
				}
				else if((strcmp(s[k],"down"))==0)
				{
					if(A[s1[k][0]-'A']+A[s1[k][1]-'A']+A[s1[k][2]-'A']+A[s1[k][3]-'A']>=
                       A[s2[k][0]-'A']+A[s2[k][1]-'A']+A[s2[k][2]-'A']+A[s2[k][3]-'A'])
		             flag=1;
				}
				if(flag==1)break;
			}
			if(k==3){ch='A'+i;w=1;break;}
			A[i]=1;
		}
		if(w==0)cout << ch << " is the counterfeit coin and it is light." << endl;
		else cout << ch << " is the counterfeit coin and it is heavy." << endl;
	}
}

		


			
