#include<iostream>
#include<queue>
#include <stdio.h>
using namespace std;
typedef struct myw
{
 char mystr[100];
 int priority,num;
 bool operator < (const myw &a) const
 {
  return a.priority<priority;
 }
}myw;
priority_queue<myw> mypq;
int main()
{
 myw tmp2;
 char tmp[100];
 while(scanf("%s",tmp)!=EOF)
 {
  if(strcmp(tmp,"GET")==0)
  {
   if(mypq.empty())
   {
    printf("EMPTY QUEUE!\n");
   }
   else
   {
   tmp2=mypq.top();
   mypq.pop();
   printf("%s %d\n",tmp2.mystr,tmp2.num);
   }
   continue;
  }
  if(strcmp(tmp,"PUT")==0)
  {
   scanf("%s%d%d",&tmp2.mystr,&tmp2.num,&tmp2.priority);
   mypq.push(tmp2);
   continue;
  }
 }
 return 0;
}

