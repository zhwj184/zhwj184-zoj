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
	int bit[30][30];
	int  ch;
	int s,t;
	char res[500];
	int T;
	scanf("%d",&T);
	getchar();
	//cin >> T;
	int num = 1;
	char temp[500];
	while(T--)
	{
		gets(temp);
		int b = 1;
		if(temp[1] >= '0' && temp[1] <= '9')
		{
			r = (temp[0] - '0') * 10 + (temp[1] - '0');
			b++;
		}
		else 
			r = (temp[0] - '0');
		b++;
		if(temp[b+1] >= '0' && temp[b+1] <= '9')
		{
			c = (temp[b] - '0') * 10 + (temp[b+1] - '0');
			b++;
		}
		else 
			c = (temp[b] - '0');
		b++;
		b++;
		int d = strlen(temp);
		int f;
		for(f = b; f < d; f++)
			res[f-b] = temp[f];
		res[d-b] = '\0';
		//cout << "r c len " << r << " " << c << " " << strlen(res) << endl;
		//cout << res << endl;
		//sscanf(temp,"%d %d %s",&r,&c,res);
		//scanf("%d %d ",&r,&c);
		/*for(i = 0; i < r; i++)
			for(j = 0; j < c; j++)
				cin >> bit[i][j];*/
		//getchar();
		/*char ch;
		int a = 0;
		ch = getchar();
		while(ch==' ' || (ch >= 'A' && ch <= 'Z'))
	 	{
			 res[a++] = ch;
			 ch = getchar();
	 	}
	 	res[a] = '\0';*/
	 //	gets(res);
	    //scanf("%[^\n]",res); 
	 	//cout << res << endl;
	 	//cout << strlen(res) << endl;
		for(i = 0; i < 30; i++)
			for(j = 0; j < 30; j++)
				bit[i][j] = 0;
		memset(bit,0,sizeof(bit));
		nl = 0; 
		nr = c-1;
		nt = 0;
		nb = r-1;
		int nowx,nowy;
		nowx = 0;
		nowy = -1;
		dir = right;
		//a = 0;
	/*	for(i = 0; i < r; i++)
		{
			for(j = 0; j < c; j++)
				cout << bit[i][j] ;
				cout << endl;
		}
	*/	int len = strlen(res);
		for(k = 0; k < len; k++)
		{
			i = 0; 
			t = 16;
			s = 0;
			int tem[6];
			if(res[k] == ' ')
				s = 0;
			else 
				s = (res[k] - 'A') + 1;
	
			for(j = 0; j < 5; j++)
			{
				tem[j] = s / t;		
				s %= t;
				t /= 2;	
	
			}	
		//	cout << s << " ";
		//	tem[5] = '\0';
		//	cout << temp << endl;
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
				bit[nowx][nowy] = tem[i];	
				i++;
				//cout <<" nowx nowy= " << nowx+1 << " " <<  nowy+1 << " ";
			}
		}
		//cout << endl;
        cout << num << " ";
		for(i = 0; i < r; i++)
			for(j = 0; j < c; j++)
				cout << bit[i][j];
		cout << endl;
		num++;
	}
}
