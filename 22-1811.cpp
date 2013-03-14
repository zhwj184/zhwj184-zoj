#include <iostream>
#include <cstdio>
#include <string>
#include <bitset>
using namespace std;
int n;
int A[1001];
int game[101];
int i,j,k,m;
int s,t;
int play[6];
int flag[6];
int main()
{
	
	for(i=0;;i++)
	{
		cin >> A[i];
		if(A[i]==0)
		{
			m=i;
			break;
		}
	}
	while(1)
	{
		memset(game,0,sizeof(game));
		cin >> n;
		if(n==0) break;
		for(i=0;;i++)
		{
			cin >> s >> t;
			if(s==0&&t==0)
				break;
			game[s]=t;
		}
		for(i=0;;i++)
		{
			cin >> s;
			if(s==0) break;
			if(s>=0) game[s]=-1;
			else if(s<0) game[-s]=-2;
		}
		k=0;
		j=0;
		memset(play,0,sizeof(play));
		memset(flag,0,sizeof(flag));
		while(k<=m)
		{
			i=A[k];	
			t=0;
			//cout << game[3] << endl;
			if(flag[j]==0)
			{
				
				s=play[j]+i;
				if(game[s]>0&&s<=100) s=game[s];
				else if(game[s]==-1) t=1;
				else if(game[s]==-2) flag[j]=-1;
				if(s>100) s=play[j];
				play[j]=s;
				
				if(play[j]==100){
				cout << j+1 << endl;
				break;
				}
				//cout << j+1 << " " << play[j] << endl; 
				//if(t==0)j=(j+1)%n;
				k++;

                
			}
			else 
			{
				flag[j]=0;
				//j=(j+1)%n;
				
			}
			if(t!=1) j=(j+1)%n;
		
			
		}
	}
}

				

























