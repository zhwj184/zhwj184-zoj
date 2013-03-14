#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int a[27][6],i,i1,len;
    long ans;
    char str[8];
    for(i=1;i<=26;i++)
    {
        a[i][1]=1;
        if(i>=22)
        a[i][27-i]=1;
    }
    for(i=2;i<=5;i++)
    {
        for(i1=26-i;i1>0;i1--)
        a[i1][i]=a[i1+1][i]+a[i1+1][i-1];
    }
    while(gets(str))
    {
        len=strlen(str);
        ans=0;
        str[len]='z'+1;
        for(i=1;i<=len;i++)
        {
           if(str[i-1]>=str[i])
           {
             ans=0;
             break;
           }
           for(i1=1;i1<=str[i-1]-96;i1++)
           {
            ans+=a[i1][len-i+1];
           }
        }
        printf("%ld\n",ans);
    }
}
            
 zoj 1342解题报告

题目:Word Index

http://acm.zju.edu.cn/show_problem.php?pid=1342

这道题主要是是用dp，先设一个数组，a[27][6]。

a[i][j]的含义是：字母i+'a'-1放在最高位的时候，出现的情况的种数，（总位数为j）。于是可以得到状态转移方程为

a[i][j]=a[i+1][j]+a[i+1][j-1];

边界情况a[i][1]=1(1<=i<=26),a[i][27-i]=1(2<=i<=5)。

经过两重循环之后，将a中的元素全部计算完毕，这时再根据读入的字符串，根据每个字符的位置，从a读取所有小于等于它的字母的值并且累加即可。

代码：#include
#include
main()
{
 int a[27][6],i,i1,ans,len;
 char str[8];
 for(i=1;i<27;i++)
 {
  a[i][1]=1;
  if(i>=22)
   a[i][27-i]=1;
 }

 for(i=2;i<=5;i++)//计算a 的值

 {
  for(i1=26-i;i1>0;i1--)
  {
   a[i1][i]=a[i1+1][i]+a[i1+1][i-1];
  }
 }
 while(gets(str)!=NULL)
 {
  ans=0;
  len=strlen(str);
  str[len]='z'+1;
  for(i=1;i<=len;i++)
  {
   if(str[i-1]>=str[i])//判断是否符合条件 否则输出0
   {
    ans=0;
    break;
   }
   for(i1=1;i1<=str[i-1]-96;i1++)
   {
    ans+=a[i1][len-i+1];
   }
  }
  printf("%d\n",ans);
 }
}


        
