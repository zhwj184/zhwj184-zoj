#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int m,n;
    char s[201];
    int flag;
    while(cin>>s)
    {
        m=strlen(s);
        flag=1;
        int a=310;
        int b=420;
        printf("300 420 moveto\n310 420 lineto\n");
        for(int i=0;i<m;i++)
        {
            if(flag==1&&s[i]=='A'){flag=4;printf("%d %d lineto\n",a,b-10);b-=10;}
            else if(flag==1&&s[i]=='V'){flag=2;printf("%d %d lineto\n",a,b+10);b+=10;}
             else if(flag==2&&s[i]=='A'){flag=1;printf("%d %d lineto\n",a+10,b);a+=10;}
              else if(flag==2&&s[i]=='V'){flag=3;printf("%d %d lineto\n",a-10,b);a-=10;}
               else if(flag==3&&s[i]=='A'){flag=2;printf("%d %d lineto\n",a,b+10);b+=10;}
                else if(flag==3&&s[i]=='V'){flag=4;printf("%d %d lineto\n",a,b-10);b-=10;}
                 else if(flag==4&&s[i]=='A'){flag=3;printf("%d %d lineto\n",a-10,b);a-=10;}
                  else {flag=1;printf("%d %d lineto\n",a+10,b);a+=10;}
        }
        printf("stroke\nshowpage\n");
    }
}




