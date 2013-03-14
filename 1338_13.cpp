#include<iostream>
#include<cctype>
#include<cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int test[31];
int count,up,down;
int mid;
double uu,dd;

int main()
{
	int flag=0;
	int i,j,k,m,n;
	while( cin >> test[0] && test[0]){
		for(i=1;;i++){
			cin >> test[i];
			if(test[i]==0)
				break;
		}
		uu=0;
		dd=0;
		up=0;
		down=0;
		mid=0;
		int f=0;
		for(j=1;j<i;j++)
		{
			if(test[j]>test[j-1]||f==1&&test[j]==test[j-1]){
				uu+=mid;
				uu=uu+1;
				f=1;
				mid=0;
			}
			else if(test[j]<test[j-1]||f==-1&&test[j]==test[j-1]){
				dd=dd+1;
				dd+=mid;
				f=-1;
				mid=0;
			}
			else if(test[j]==test[j-1])
				mid++;
		}
		flag=1;
		for(j=1;j<i;j++)
		{
			if(test[j]<test[j-1]){
				flag=1;
				
			}
			else if(test[j]>test[j-1]&&flag==1){
				flag=0;
			    up++;
			}
		}
		flag=1;
		for(j=1;j<i;j++)
		{
			if(test[j]>test[j-1]){
				flag=1;
				
			}
			else if(flag==1&&test[j]<test[j-1]){
				flag=0;
				down++;
			}
		}
		//cout << up << " " << down << endl;
		printf("Nr values = %d:  %.6f %.6f\n",i,up==0?uu:uu/up,down==0?dd:dd/down);
	}
}

