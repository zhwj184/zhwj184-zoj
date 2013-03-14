#include <iostream.h>
#include <string>

int b[100][3];
int v[100];

void swap( int &a, int &b )
{
int tmp = a;
a = b;
b = tmp;
}

int main()
{
int n;
int c = 0;
while( cin>>n )
{
c++;
if( n == 0 ) return 1;
int i;
int j;
int N = 3*n;
memset( v, 0, sizeof( v[0] )* 100 );
for( i = 0; i < N; i+=3 )
{
cin>>b[i][0]>>b[i][1]>>b[i][2];

for( j = 1; j < 3; j++ )
{
b[i+j][0] = b[i][j];
b[i+j][1] = b[i][(j+1)%3];
b[i+j][2] = b[i][(j+2)%3];
}
for( j = 0; j < 3; j++ )
{
if( b[i+j][0] < b[i+j][1] )//3¡è¡ä¨®¨®¨²?¨ª
swap( b[i+j][0], b[i+j][1] );
}
}

for( i = 0 ; i < N; i++ )
{
for( j = i + 1; j < N; j++ )
{
if( b[i][0] > b[j][0] )
{
swap( b[i][0], b[j][0] );
swap( b[i][1], b[j][1] );
swap( b[i][2], b[j][2] );
}
}
}

int Max = 0;
for( i = 0 ; i < N; i++ )
{
j = 0;
int max = b[i][2];
while( j < i )
{
if( b[i][0] > b[j][0] && b[i][1] > b[j][1] )
{
int vt = v[j] + b[i][2];
if( vt > max )
max = vt;
}
j++;
}

v[i] = max;
if( max > Max )
Max = max;
}
cout<<"Case "<<c<<": maximum height = "<<Max<<endl;
}//while

return 0;
}
