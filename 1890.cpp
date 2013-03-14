#include <iostream.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char s[30];
    char t[30];
    int t1,t2;
    int i,j,k;
    int s1,s2;
    double d;
        t1=0;
        t2=0;
        i=0;
        j=0;
        s1=0;
        s2=0;
        d=0;
    while(gets(s))
    {
        memset(t,' ',sizeof(t));
        k=strlen(s);

        if(k>8)
        {

            t2=(((s[0]-'0')*10+s[1]-'0')*3600+ ((s[3]-'0')*10+s[4]-'0')*60+((s[6]-'0')*10+s[7]-'0'));
             d+=((double)((t2-t1)*s1))/3600;
            s1=0;
            for(j=9;j<k;j++)
            s1=s1*10+(s[j]-'0');
            t1=t2;
           // cout << d << endl;
          //    cout << t2 << endl ;
         //   cout << t1 << endl << s1 << endl;

        }
        else
       {
            for(i=0;i<8;i++)
            t[i]=s[i];
            t2=(((s[0]-'0')*10+s[1]-'0')*3600+ ((s[3]-'0')*10+s[4]-'0')*60+((s[6]-'0')*10+s[7]-'0'));
            d+=((double)((t2-t1)*s1))/3600;
            t1=t2;
           // s1=s2;
           // cout << t2 << endl ;
            for(i=0;i<8;i++)
            cout << s[i];
            cout << " ";
            printf("%.2f km\n",d);
           // cout << d << endl;
       }
    }
}
        
            


