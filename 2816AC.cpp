#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;
typedef struct node{
	char word[81];
	int count[27];
}word;
word words[101];
int n;
char test[80];
int has;
int i,j,k;
void solute(char *tes)
{
	//cout << tes << endl;
	int p,q;
	int flag=0;
	has=0;
	int s,t;
    n=-1;
	int find=0;
	int pos=0;
  	    p=strlen(tes);
	//	cout << p << endl;
	//	cout << i << endl;
		for(q=0;q<i;q++)
		{
			has=0;
			find=0;
			flag=0;
			for( s=0;s<p;s++)
			{
				if(tes[s]!='-'&&tes[s]!='+'&&tes[s]!='|')
				{
					if(flag==0)
					{
						if(words[q].count[tes[s]-'a']!=0)
							has++;
					}
					else if(flag==-1)
					{
						if(words[q].count[tes[s]-'a']!=0)
						{ flag=0;find=1;}
					}
					else 
					{
						if(words[q].count[tes[s]-'a']==0)
						{ flag=0;find=1;}
					}
					if(s==p-1)
					{
						if(find==0&&has>0)
						{
						if(n<0)n=q;
				        else if(strcmp(words[n].word,words[q].word)>0)n=q;
						//cout << words[q].word<< endl;
						break;
						}
					}
				}
				else if(tes[s]=='-') flag=-1;
				else if(tes[s]=='+') flag=1;
				else if(tes[s]=='|') 
				{
					if(find==0&&has>0)
					{
						if(n<0)n=q;
				        else if(strcmp(words[n].word,words[q].word)>0)n=q;
						//cout << words[q].word<< endl;
						break;
					}
					else {find=0;has=0;}

				}
			}
				
		}
	    if(n<0) cout << "NONE\n";
		else cout << words[n].word << endl;
		//cout << res << endl;
		//res = strtok( NULL,delims);
		
    //}

}
int main()
{
	while(1)
	{
		for(i=0;i<101;i++)
			for(j=0;j<27;j++)
			words[i].count[j]=0;
		for(i=0;;i++)
		{
			cin >> words[i].word;
			if(strcmp(words[i].word,"#")==0) 
			{
				return 1;
			}
			if(strcmp(words[i].word,"*")==0)
				break;
			k=strlen(words[i].word);
			for(j=0;j<k;j++)
				words[i].count[words[i].word[j]-'a']++;		
			//cout << words[i].word << endl;		
		}
		while(cin >> test)
		{
			if(strcmp(test,"**")==0) 
			{
				cout << "$" << endl;
				break;
			}
		//	cout << test << endl;
			solute(test);
		}
	}
}