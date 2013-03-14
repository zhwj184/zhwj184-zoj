#include <iostream>
#include <string>
#include <cctype>
#include<sstream>
using namespace std;

int main()
{
	string s,t,d;
	char ch;
	int i,j,a,b,k,f,p;
	int m,n;
	getline(cin,t);
	istringstream s1(t);
	s1 >> n;
	//cin >> n;
	for(i=0;i<n;i++){
		getline(cin,t);
		getline(cin,t);
		istringstream s2(t);
		s2 >> m;
		s="";
		for(j=0;j<m;j++){
			//cin >> t;
			getline(cin,t);
			s.insert(s.end(),t.begin(),t.end());
		}

		//cout << s << endl;
		f=1;
		a=0;
		b=s.length()-1;
		p=0;
	
 		while(getline(cin,t)){	
		    istringstream s3(t);
			while(s3>>ch){
				if(ch=='#') goto end;
				if(ch=='R')
					f=-f;
				else {
					if(f==1){
						cout << s[a];
						a++;
					}
					else {
						cout << s[b];
						b--;
					}
					p++;
					if(p==80){
						cout << endl;
						p=0;
					}
				}
			}
		}
end: 
		if(p!=0) cout << endl;
		if(i<n-1) cout << endl;
	}
}
