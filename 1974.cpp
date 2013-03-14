#include <iostream.h>
#include<stdio.h>


int main ()
{
  int n;
  while (cin >> n)
  {
    double x[n], y[n];
    for (int i=0 ; i<n ; i++)
      cin >> x[i] >> y[i];
    double xx = x[0], yy = y[0];
    for (int i=0 ; i<n ; i++)
      xx = x[i] + (x[i] - xx), yy = y[i] + (y[i] - yy);
    xx = (x[0] + xx) / 2.0, yy = (y[0] + yy) / 2.0;
    cout << n;
    for (int i=0 ; i<n ; i++)
    {
      printf(" %f %f", xx, yy);
      xx = x[i] + (x[i] - xx), yy = y[i] + (y[i] - yy);
    }
    cout << endl;
  }
  return 0;
}

