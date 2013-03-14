#include<iostream>
#include<cctype>
#include<cstring>
#include <string>
//#include <cstdlib>
#include <cmath>
using namespace std;

char str[11];
int digit;

int main()
{

	int s,i,j,k;
	string ss;
	int len;
	while( cin >> s >> str){
		if(s==0 && strcmp(str,"0")==0)
			break;
		ss=" ";
		string s1;
		s1="";
		for(i=0;i<s;i++)
		{ 
			ss=ss.append("-");
			s1.append(" ");//s1=s1+" ";
		}
		ss+=" ";
		//ss=" "+ss;
		s1+="  ";
		//cout << ss << endl;
		k=strlen(str);
		for(i=0;i<k;i++){
			if(str[i]=='1' || str[i]=='4')
				cout << s1 ;//continue;
			else cout << ss ;
			if(i!=k-1) cout << " ";
			else cout << endl;
		}
		string t1,t2,t3;
		t1="";
		t2="";
		t3="";
		for(i=0;i<s;i++){t1+=" ";t2+=" ";t3+=" ";}
		t1=" "+t1+"|";
		t2="|"+t2+" ";
		t3="|"+t3+"|";
		for(j=0;j<s;j++){
			for(i=0;i<k;i++){
				if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='7')
					cout << t1;
				else if(str[i]=='5' || str[i]=='6') 
					cout << t2;
				else cout << t3;
				if(i!=k-1) cout << " ";
				else cout << endl;
			}
		}

		for(i=0;i<k;i++){
			if(str[i]=='1' || str[i]=='7'|| str[i]=='0')
				cout << s1 ;//continue;
			else cout << ss ;
			if(i!=k-1) cout << " ";
			else cout << endl;
		}

		for(j=0;j<s;j++){
			for(i=0;i<k;i++){
				if(str[i]=='1' || str[i]=='4' || str[i]=='3' || str[i]=='7'|| str[i]=='9'||str[i]=='5')
					cout << t1;
				else if(str[i]=='2') 
					cout << t2;
				else cout << t3;
				if(i!=k-1) cout << " ";
				else cout << endl;
			}
		}
		for(i=0;i<k;i++){
			if(str[i]=='1' || str[i]=='4'||str[i]=='7')
				cout << s1 ;//continue;
			else cout << ss ;
			if(i!=k-1) cout << " ";
			else cout << endl;
		}
		cout << endl;

	}
}
