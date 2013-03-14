#include <iostream.h>
int main()
{
    double file;
    double  n;
    int i=1;
    while(cin >> n &&n!=0)
    {
        file=n*0.75;
        file/=62;
        file/=30000;
        file=(int)(file+1);
        cout << "File #" << i << endl;
        cout <<"John needs "<<file<<" floppies." << endl;
        cout << endl;
        i++;
    }
}
        
