#include <cstdio>
#include <cstring>
#include <cctype>
#include <iostream>
using namespace std;

char *x[] = {
"WET","0",
"UTC","0",
"GMT","0",
"BST","+1",
"IST","+1",
"WEST","+1",
"CET","+1",
"CEST","+2",
"EET","+2",
"EEST","+3",
"MSK","+3",
"MSD","+4",
"AST","-4",
"ADT","-3",
"NST","-3.5",
"NDT","-2.5",
"EST","-5",
"EDT","-4",
"CST","-6",
"CDT","-5",
"MST","-7",
"MDT","-6",
"PST","-8",
"PDT","-7",
"HST","-10",
"AKST","-9",
"AKDT","-8",
"AEST","+10",
"AEDT","+11",
"ACST","+9.5",
"ACDT","+10.5",
"AWST","+8",
"",""};

int main()
{
	int cas;
	char t1[6],t2[6];
	double off;
	int  s1,s2;
	char buf[10];
	int i,j,k;
	cin >> cas;
	while(cas--)
	{
		s1=0;
		s2=0;
		cin >> buf;
		if(strcmp(buf,"noon")==0)
		{
			s1=12*60;
		}
		else if(strcmp(buf,"midnight")==0)
		{
			s1=0;
		}
		else 
		{
			//cin >> buf;
			k=strlen(buf);
			for(i=0;i<k;i++)
			{
				if(buf[i]==':') break;
				s1=s1*10+(buf[i]-'0');
			}
			if(s1==12) s1=0;
			s1*=60;
			for(j=i+1;j<k;j++)
			{
				s2=s2*10+buf[j]-'0';
			}
			s1=s1+s2;
			//cout << s1 << " " << s2 << endl;
			cin >> buf;
			if(strcmp(buf,"p.m.")==0) s1=s1+12*60;
				
		}
		//cout << s1 << " " << s2 << endl;
		cin >> t1 >> t2;
		for(i=0;*x[i]&&strcmp(x[i],t1);i++);
		sscanf(x[i+1],"%lf",&off);
		s1-=(off*60);
		for (i=0;*x[i] && strcmp(x[i],t2);i++);
		//if (strcmp(x[i],buf)) printf("oops:  %s\n",buf);
		sscanf(x[i+1],"%lf",&off);
		s1+=(off*60);
		s1=(s1+24*60)%(24*60);
		if(s1==12*60) cout << "noon" << endl;
		else if(s1==0) cout << "midnight" << endl;
		else 
		{
			int h,flag;
			h=s1/60%12;
			if(h>12) {h-=12;flag=1;}
			else flag=0;
			if(h==0) h=12;
			printf("%d:%02d %s\n",h,s1%60,s1>12*60?"p.m.":"a.m.");
		}


	}
}