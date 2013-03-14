#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
typedef struct stack{
	int x,y;
	//char c;
}stack;
int main()
{
	int m,n,i,j,k;
	int count,num[151];
    //char stack[1000];
	stack stacks[1000];
	int top;
	long sum;
	int err;
	int s,t,q,p;
	long x[27],y[27];
	char str[100];
	char ch[27];
	int flag;		
	memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> ch[i];
		cin >> s >> t;
		x[ch[i]-'A']=s;
		y[ch[i]-'A']=t;
	}
	while(cin >> str)
	{

		if(strlen(str)==1) cout << "0" << endl;//sum=0;//cout << "error" << endl;
		else 
		{
			k=strlen(str);
			top=-1;
			sum=0;
			flag=0;
			for(j=0;j<k;j++)
			{
				if(str[j]=='(') continue;
				else if(str[j]==')')
				{
					s=stacks[top].x;
					t=stacks[top].y;
					top--;
					p=stacks[top].x;
					q=stacks[top].y;
					top--;
					if(s!=q){
						flag=1;
						break;
					}
					else sum+=t*p*q;
					top++;
					stacks[top].x=p;
					stacks[top].y=t;
				}
				else 
				{
					++top;
					if(x[str[j]-'A']==0) 
					{
						flag=1;
						break;
					}
					if(y[str[j]-'A']==0)
					{
						flag=1;
						break;
					}
					stacks[top].x=x[str[j]-'A'];
					stacks[top].y=y[str[j]-'A'];
				}
			}
			if(flag) cout << "error" << endl;
			else cout << sum << endl;
		}	
	}
}




    