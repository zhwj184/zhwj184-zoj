#include <fstream>
#include <algorithm>

unsigned int m[300000][20];

unsigned int rek( unsigned int a, unsigned int b ) {
  if( a > b ) {
    swap( a, b );
  }
  if( a == 0 )
    return 1;
  else if( a == 1 )
    return b+1;

  if( m[b][a] == 0 )
    m[b][a] = rek( a-1, b ) + rek( a, b-1 );
  return m[b][a];
}


int main() {
  for( int i = 0; i < 300000; i++ )
    for( int j = 0; j < 20; j++ )
      m[i][j] = 0;

  ifstream file( "grid.in" );
  while( 1 ) {
    unsigned int n, m;
    file >> n >> m;
    if( n == 0 && m == 0 )
      break;
    cout << rek( n,m ) << endl;
  }
  return 0;
}
