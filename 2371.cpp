#include <iostream>
#include <cmath>
using namespace std;
void mult(char c[],char t[],int m)
{
    int i,l,k,flag,add=0;
    char s[100];
    l=strlen(c);
    for (i=0;i<l;i++)
        s[l-i-1]=c[i]-'0'; 

    for (i=0;i<l;i++)
           {
           k=s[i]*m+add;
           if (k>=10) {s[i]=k%10;add=k/10;flag=1;} else {s[i]=k;flag=0;add=0;}
           }
    if (flag) {l=i+1;s[i]=add;} else l=i;

    for (i=0;i<l;i++)
        t[l-1-i]=s[i]+'0';
    t[l]='\0';
}

int main()
{
	char S[200][200];
	int i,j,k;
	int T[100];
	long long n;
	S[0][0]='1';
	S[0][1]='\0';
	for(i=1;i<115;i++)
	{
		 mult(S[i-1],S[i],3);
		//S[i]=S[i-1]*3;
		//if(S[i]>1000000000000000000)break;
		//cout << S[i] << endl;
	}
	while(cin >> n && n)
	{
		n--;
		j=0;
		k=0;
		while(n)
		{
			T[j]=n%2;
			if(T[j]>0) k=j;
			n/=2;
			//cout << T[j] ;
			j++;
		}
		if(k==0)cout << "{ }\n";
		else 
		{
			cout << "{";
			for(i=0;i<k;i++)
			{
				if(T[i]==1) cout << " " << S[i] << ",";
			}
			cout << " " << S[k];
			cout  << " }\n";
		}

	}
}




