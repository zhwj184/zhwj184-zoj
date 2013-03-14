#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void floyd(vector<vector<int> > & link)
	
{
	int i,j,k;
	int n=link.size();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(link[j][i]+link[i][k]<link[j][k])
					link[j][k]=link[j][i]+link[i][k];
			}
		}
	}
}

int main()
{
	int m,n,p;
	string des,sou;
	int i,j,k;
	int cost;
	int cas=1;
	int data;
	cin >> data;
	cout<<"SHIPPING ROUTES OUTPUT\n";
	
	
	while(data--)
	{
		cout<<"\nDATA SET "<<cas<<"\n\n";
		cin >> m >> n >> p;
		vector<string> vec(m);
		for(i=0;i<m;i++)
			cin >> vec[i];
		vector<int> temptemp(m,10000);vector<vector<int> > vect(m,temptemp);
		for(j=0;j<n;j++)
		{
			cin >> des >> sou;
			i=find(vec.begin(),vec.end(),des)-vec.begin();
			k=find(vec.begin(),vec.end(),sou)-vec.begin();
			vect[i][k]=vect[k][i]=1;
		}

		//cout << endl;
		//cout<<"\nDATA SET "<< cas <<"\n\n";

		floyd(vect);

		for(i=0;i<p;i++)
		{
			cin >> cost >> des >> sou ;
			j=find(vec.begin(),vec.end(),des)-vec.begin();
			k=find(vec.begin(),vec.end(),sou)-vec.begin();
		 if(vect[j][k]==10000) cout<<"NO SHIPMENT POSSIBLE\n";
           else cout<<"$"<<cost*100*vect[j][k]<<endl;
		}
		//cout << endl;
		cas++;
	}
	cout<<"\nEND OF OUTPUT\n";
}

			
