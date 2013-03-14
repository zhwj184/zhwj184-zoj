#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;
int cmp(const int & a,const int & b){
   return a>b;
}
int main(){
	string s;
	int l,k;
	int num,i,j;
	int len[21];
	int flag;
	cout<<"Problem 7 by team x\n";
	while(getline(cin,s)){
		istringstream ss(s);
		ss >> l >> k;
		l+=k;
		vector <int> vec;
		vector<int>::iterator ite;
		while(ss >> i )
			vec.push_back( i+k);
		sort(vec.begin(),vec.end(),cmp);
		flag=0;
		memset(len,0,sizeof(len));
		cout << endl;
		num=0;
		//for(i=0;i<vec.size();i++) 
			//len[i]=vec[i];cout<<vec[i]<<" ";
		while(!flag){
			num++;
			j=0;
			flag=1;
			for(i=0;i<vec.size();i++)//ite=vec.begin();ite!=vec.end();ite++){
			{
				if(j+vec[i]<=l && len[i]==0 )//*ite+j<=l){
				{	//j+=*ite;
					//vec.erase(ite);
					len[i]=1;
					j+=vec[i];
					flag=0;
					//vec.erase(&vec[i]);
					//i--;
				}
			}
		}

		cout << "Board length            =" << setiosflags(ios::right) << setw(6) << l-k << endl;
		cout << "Saw width               =" << setiosflags(ios::right) << setw(6) << k << endl;
		cout << "Number of boards needed =" << setiosflags(ios::right) << setw(6) << num-1 << endl;
		
	}
	cout << "End of problem 7 by team x" << endl;
}
