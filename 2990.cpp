#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	enum dire{left,right,up,down};
	dire dir;
	int nb,nt,nl,nr;
	int r,c;
	int i,j,k,m;
	char bit[30][30];
	int  ch;
	int s,t;
	char res[300];
	int T;
	cin >> T;
	int a = 0;
	int num = 1;
	while(T--)
	{
		cin >> r >> c;
		for(i = 0; i < r; i++)
			for(j = 0; j < c; j++)
				cin >> bit[i][j];
		nl = 0; 
		nr = c-1;
		nt = 0;
		nb = r-1;
		int nowx,nowy;
		nowx = 0;
		nowy = -1;
		dir = right;
		a = 0;
	/*	for(i = 0; i < r; i++)
		{
			for(j = 0; j < c; j++)
				cout << bit[i][j] ;
				cout << endl;
		}
	*/		
		for(k = 5; k <= r*c; k+=5)
		{
			i = 0; 
			t = 16;
			s = 0;
			while(i < 5)
			{
				if(dir == right)
				{
					if(nowy == nr)
					{
						nt++;
						dir = down;
						nowx++;
					}
					else 
						nowy++;
				}
				else if(dir == down)
				{
					if(nowx == nb)
					{
						nr--;
						dir = left;
						nowy--;
					}
					else 
						nowx++;
				}
				else if(dir == left)
				{
					if(nowy == nl)
					{
						nowx--;
						nb--;
						dir = up;
					}
					else 
						nowy--;
				}
				else if(dir == up)
				{
					if(nowx == nt)
					{
						nowy++;
						dir = right;
						nl++;
					}
					else 
						nowx--;
				}
				if(bit[nowx][nowy] == '0')
					ch = 0;
				else 
					ch = 1;
				s+=(ch * t);
				t /= 2;
				i++;
				//cout <<" nowx nowy= " << nowx+1 << " " <<  nowy+1 << " ";
			}
			//cout << s << " ";
				if(s == 0)
					res[a] = ' ';
				else 
					res[a] = 'A'+(s-1);
				a++;
		}
		a--;
		while(res[a] == ' ')
			a--;
		res[a+1] = '\0';
		cout << num << " " << res << endl;
		num++;
	}
}
