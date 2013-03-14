#include<iostream>
#include<cctype>
#include<cstring>
//#include <cstdlib>
#include <cmath>
using namespace std;


int point[100][11];
int path[11][11];

int coun;
int n;

int start,end;

int find(int *sea)

{
	int flag=0;
	int i,j;
	//for(i=0;i<n;i++) { cout << " " << sea[i] ;} cout << endl;
	for(i=0;i<coun;i++)
	{
		//for(j=0;j<n;j++) { cout << " " << point[i][j] ;} cout << endl;
		for(j=0;j<n;j++)
		{
			if(point[i][j]!=sea[j])
			{
				flag=1;
				break;
			}
		}
		if(j==n) return i;
	}
	for(j=0;j<n;j++)
		point[coun][j]=sea[j];
	coun++;
	return coun-1;
}

int main()
{
	int i,j,k;
	int cas=0;
	int t[11],s[11];
	int tt[11],ss[11];
	while( cin >> n && n) {
		start=0;
		coun=0;
		end=0;
		cas++;
		memset(path,0,sizeof(path));
		memset(point,0,sizeof(point));
		for(i=0;i<n;i++)
		{
			cin >> t[i];
		}
		for(i=0;i<n;i++)
		{
			cin >> s[i];
		}
		//cout << start << " " << end << endl;
		for(j=0;;j++){

			cin >> tt[0];
			if(tt[0]==-1) break;
			for(i=1;i<n;i++)
			{
				cin >> tt[i];
				
			}
			for(i=0;i<n;i++)
			{
				cin >> ss[i];
				
			}
			start=find(tt);
			end=find(ss);
			path[start][end]=1;
			path[end][start]=1;
			//cout << "start " << start << endl;
			//cout << "end " << end << endl;
		}
		//cout << count << endl;
		//for(i=0;i<j;i++){ cout << tt[i] << endl;}
		//n=(int) pow(2.0,(double) n);
		//n*=10;
		for(i=0;i<n;i++) path[i][i]=1;
		int nn=coun;
		for(i=0;i<nn;i++)
			for(j=0;j<nn;j++)
				for(k=0;k<nn;k++){
					if( path[j][i]==1&& path[i][k]==1){
						path[j][k]=1;
						path[k][j]=1;
					}
				}
		/*for(i=0;i<nn;i++){
			for(j=0;j<nn;j++)
				cout << path[i][j];
			cout << endl;
		}*/
		start=find(t);
		end=find(s);
		cout << "Maze #"<< cas;
		if(path[start][end])   
			cout << " can be travelled" << endl;
	   else 
		   cout << " cannot be travelled" << endl;
	}


}
