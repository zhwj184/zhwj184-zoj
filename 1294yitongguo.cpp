#include<iostream.h>
#include<stdio.h>
main()
{
    int i=1;
    int a,b;
    while(cin>>a>>b&&a!=0&&b!=0)
    {
        if(b==1)printf("Hole #%d\nHole-in-one.\n\n",i);
        else if(b+3<=a)printf("Hole #%d\nDouble Eagle.\n\n",i);
        else if(b+2==a)printf("Hole #%d\nEagle.\n\n",i);
        else if(b+1==a)printf("Hole #%d\nBirdie.\n\n",i);
        else if(b==a) printf("Hole #%d\nPar.\n\n",i);
        else if(b==a+1)printf("Hole #%d\nBogey.\n\n",i);
        else if(b>=a+2)printf("Hole #%d\nDouble Bogey.\n\n",i);
        i++;
    }
}
