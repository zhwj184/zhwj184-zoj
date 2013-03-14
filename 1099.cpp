#include <string>
#include <iostream>
using namespace std;

string s;
int len=0;

void solve(){

	if(s.compare("<br>")==0){
		cout << endl;
		len=0;
		return ;
	}
	else if(s.compare("<hr>")==0) {
		if(len!=0) cout << endl;
		for(int  i=0;i<80;i++) cout << "-";
			cout << endl;
			len=0;
			return ;
	}
againe:
		if(len==0) {
			cout << s;
			len+=s.length();
			if(len>80){
				cout << endl;
				len=0;
			}
				return ;
		}
			len+=s.length()+1;
			if(len>80) {
				cout << endl;
				len=0;
			    goto againe;
	
			}
		cout << " " << s;
	

}
int main()
{
	while( cin >> s)
		solve();
	cout << endl;

}