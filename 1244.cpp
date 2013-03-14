#include <string>
#include <iostream>
#include <cctype>
#include <cstring>
#include <list>
using namespace std;

string val[1000];

int n;
int main()
{
	int i,j,k,m;
	string s,t;
	int cas=0;
	char ch;
	while( cin >> n && n)
	{
		for(i=0;i<1000;i++)
			val[i]="";
		cas++;
		k=1;
		val[0]="a";
		int flag=0;
		for(i=0;i<n;i++)
		{
			cin >> s >> ch >> t;
			for(j=0;j<k;j++)
				if(val[j].compare(t)==0)
				{
					flag=0;
					for(m=0;m<k;m++) 
						if(val[m].compare(s)==0) 
						{
							flag=1;
							break;
						}
					if(flag) break;
					val[k]=s;
					k++;
					break;
				}
			if(j==k){
				for(m=0;m<k;m++)
				{
					if(val[m].compare(s)==0)
					{
						val[m]="";
						//break;
					}
				}
			}
		}
		//cout << k << endl;
		for(j=0;j<k-1;j++)
		{
			if(val[j]=="") 
				continue;
			for(m=j+1;m<k;m++)
				if(val[m]!="" && val[j].compare(val[m])>0)
				{
					t=val[m];
					val[m]=val[j];
					val[j]=t;
				}
		}
		int num=0;
		for(j=0;j<k;j++){
			if(val[j]!="")
				num++;
		}
		cout << "Program #" << cas << endl;
		if(num==0) cout << "none" << endl;
		else {
		//cout << num << endl;
			for(j=0,m=0;j<k&&m<num;j++){
				if(m<num && val[j]!="")
				{
					cout << val[j] << " ";
					m++;
				}
				//else if(m==num-1 && val[j]!="")
					//cout << val[j] << endl;
			}
			cout << endl;
		}
		cout << endl;
	}
	
}




