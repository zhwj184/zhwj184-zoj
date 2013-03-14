#include<iostream>
#include<cctype>
#include<cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

char map[32][32];
int dir=0;
int cas;
int startx,starty;
int x,y;
char ch;

int main()
{
	cin >> cas;
	int i,j,k,m,n;
	int flag;
	for(i=0;i<cas;i++){
		cin >> startx >> starty;
		//startx=31-startx;
		for(j=0;j<32;j++)
			for(k=0;k<32;k++)
				map[j][k]='.';
		//memset(map,'.',sizeof(map));
		while( cin >> ch && ch!='.'){
			if(ch=='E'){
				flag=1;
				x=startx+1;
				y=starty;
			}
			else if(ch=='W') {
				flag=3;
				x=startx-1;
				y=starty;
			}
			else if(ch=='N') {
				flag=2;
				x=startx;
				y=starty+1;
			}
			else if(ch=='S') {
				flag=4;
				x=startx;
				y=starty-1;
			}
			if(flag==1) {
				if(y>0&&x>0){
					if(map[y-1][x-1]=='.')map[y-1][x-1]='X';
				}
				//cout << x-1 << " " << y-1 << endl;
			}
			else if(flag==2) {
				if(y>0){
					if(map[y-1][x]=='.')map[y-1][x]='X';
				}
				//cout << x << " " << y-1 << endl;
			}
			else if(flag==3) {
				if(x<=31&&y<=31){
					if(map[y][x]=='.')
					map[y][x]='X';
				}
				//cout << x << " " << y << endl;
			}
			else {
				if(x>0){
					if(map[y][x-1]=='.')
					map[y][x-1]='X';
				}
				///cout << x-1 << " " << y << endl;
			}
			startx=x;
			starty=y;
			//cout << x << " " << y << endl;
		}
		
		cout << "Bitmap #" << i+1 << endl;
		for(k=31;k>=0;k--){
			for(j=0;j<32;j++)
				cout << map[k][j];
			cout << endl;
		}
		cout << endl;
		//cout << endl;
	}
}

			
