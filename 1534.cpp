#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
	string s1,s2;
	int n;
	int i,j;
	
	while(getline(cin,s1)){
		getline(cin,s2);
		istringstream is(s2);
		is >> n;
		string s;
		vector<int> veci,vecj;
		for(i=1;i<=n;i++){
			getline(cin,s2);
			s.insert(s.end(),s2.begin(),s2.end());
			for(j=1;j<=s2.length();j++){
				veci.push_back(i);
				vecj.push_back(j);
			}
		}

		//cout << s << endl;
		i=search(s.begin(),s.end(),s1.begin(),s1.end())-s.begin();
		if(i==s.length()) 
			cout << "0 0\n";
		else {
			while(1){
				j=search(s.begin()+i+1,s.end(),s1.begin(),s1.end())-s.begin();
				if(j!=s.length()) 
					i=j;
				else break;
			}
			cout << veci[i] << " " << vecj[i] << endl;
		}
		
	}
}

			