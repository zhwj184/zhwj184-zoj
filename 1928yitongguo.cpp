            #include<stdio.h>
 #include<iostream.h>
 #include<math.h>
 main()
 {
     int a,b,c,d;
     int s;
     while(cin>>a>>b>>c>>d)
     {
         if(a==0&&b==0&&c==0&&d==0)break;
         s=1080;
         if(b>a)s+=(40-b+a)*9;
         else s+=(a-b)*9;
         if(c>b)s+=(c-b)*9;
         else s+=(40-b+c)*9;
         if(d>c)s+=(40-d+c)*9;
         else s+=(c-d)*9;
        printf("%d\n",s);
     }
 }

