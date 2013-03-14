#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
int pow1(int i,int k)
{
	int res=1;
	for(int j=0;j<k;j++)
		res*=2;
	return res;
}
int main(){
	int i,j,k,m,n;
	int cas=0;
	while( cin >>n && n)
	{
		if(cas) cout << endl;
		cas++;

		vector<int> temp;
		vector<vector<int> > vec;
		vector<int> max(pow1(2,n),0),min(pow1(2,n),0);
		for(i=0;i<pow1(2,n);i++)
			temp.push_back(i+1);
		vec.push_back(temp);
		//cout << pow1(2,n) << endl;

		for(i=n-1;i>=0;i--)
		{
			temp.resize(pow1(2,i));
			for(j=0;j<pow1(2,i);j++)
				cin >> temp[j];
			vec.push_back(temp);
		}

		max[vec[n][0]-1]=1;

		for(i=n-1;i>=0;i--)
		{
			for(j=0;j<vec[i].size();j++)
				if(max[vec[i][j]-1]==0)
					max[vec[i][j]-1]=max[vec[i+1][j/2]-1]+1;
		}

		 for(i=1;i<=n;i++)
		 for(j=0;j<vec[i].size();j++)
			 min[vec[i][j]-1]=min[vec[i-1][j*2]-1]+min[vec[i-1][j*2+1]-1]+1;
		 for(i=0;i<min.size();i++)
			 min[i]=pow1(2,n)-min[i];

		 cin >> k;
		 for(i=0;i<k;i++)
		 {
			 cin >> m;
			 cout << "Player " << m << " can be ranked as high as " << max[m-1] << 
				 " or as low as " << min[m-1] << "." << endl;
		 }
	}
}



