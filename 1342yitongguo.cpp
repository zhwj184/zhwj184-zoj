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
            
 zoj 1342���ⱨ��

��Ŀ:Word Index

http://acm.zju.edu.cn/show_problem.php?pid=1342

�������Ҫ������dp������һ�����飬a[27][6]��

a[i][j]�ĺ����ǣ���ĸi+'a'-1�������λ��ʱ�򣬳��ֵ����������������λ��Ϊj�������ǿ��Եõ�״̬ת�Ʒ���Ϊ

a[i][j]=a[i+1][j]+a[i+1][j-1];

�߽����a[i][1]=1(1<=i<=26),a[i][27-i]=1(2<=i<=5)��

��������ѭ��֮�󣬽�a�е�Ԫ��ȫ��������ϣ���ʱ�ٸ��ݶ�����ַ���������ÿ���ַ���λ�ã���a��ȡ����С�ڵ���������ĸ��ֵ�����ۼӼ��ɡ�

���룺#include
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

 for(i=2;i<=5;i++)//����a ��ֵ

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
   if(str[i-1]>=str[i])//�ж��Ƿ�������� �������0
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


        
