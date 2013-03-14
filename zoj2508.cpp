#include <iostream>
#include <vector>
using namespace std;

typedef struct _tagPosition{
	int leftx;
	int rightx;
	int topy;
	int bottomy;
	int num;
	bool bMaxsize;
}Pos;

vector<Pos> windows;
int N;
int title;
int wMax;
int hMax;
vector<int> res;

void process_every_click(int x, int y, bool bDoubleClick)
{
	int index = -1;
	int num = -1;
	for(int  size = windows.size() -1 ; size >= 0; --size)
	{

		if((false == bDoubleClick && true == windows[size].bMaxsize)||
		   (x >= windows[size].leftx && x <= windows[size].rightx && y >= windows[size].bottomy && y <= windows[size].topy))
		{
			//if(num < windows[size].num)
			{
				num = size;
				index = windows[size].num;
				break;
			}
		}
		else if(true == bDoubleClick && hMax - y <= title && true == windows[size].bMaxsize)
		{
			//if(num < windows[size].num)
			{
				num = size;
				index = windows[size].num;
				break;
			}
		}
	}
	if(-1 != index)
	{
		res.push_back(index);
		//windows[index].num += N;
		if(true == bDoubleClick)
		{
			windows[num].bMaxsize = !windows[num].bMaxsize;
		}
		Pos temp = windows[num];
		vector<Pos>::iterator iter = windows.begin();
		iter += num;
		windows.erase(iter);
		windows.push_back(temp);
	}
	else
	{
		res.push_back(-1);
	}
	return ;
}

int main()
{
	int oldx;
	int oldy;
	int nowx;
	int nowy;
	int M;

	Pos myPos;
	while(cin >> N)
	{
		cin >> title >> wMax >> hMax;
		windows.clear();
		res.clear();
		for(int i = 0; i < N; i++)
		{
			cin >> myPos.leftx >> myPos.topy >> myPos.rightx >> myPos.bottomy;
			myPos.bMaxsize = false;
			myPos.num = i;
			windows.push_back(myPos);
		}

		cin >> M;
		bool bflag = false;
		if(0 < M)
		{
			cin >> oldx >> oldy;
			if( 1 == M)
			{
				process_every_click(oldx, oldy, false);
			}
			else
			{
				
				for(int j = 1; j < M; j++)
				{
					cin >> nowx >> nowy;
					if(oldx == nowx && oldy == nowy && !bflag)
					{
						bflag = true;
						process_every_click(oldx, oldy, true);
					}
					else
					{										
						if(true == bflag)
						{

							bflag = false;
							int k = res[ res.size() -1 ];
							res.push_back(k);
						}
						else
							process_every_click(oldx, oldy, false);
					}
					oldx = nowx;
					oldy = nowy;
				}
				if(true == bflag)
				{
						bflag = false;
						int k = res[ res.size() -1 ];
						res.push_back(k);
				}
				else
						process_every_click(oldx, oldy, false);	
				}
				for(int j = 0; j < M - 1; j++)
					cout << res[j] << " ";
				cout << res[M - 1] << endl;
		}
	}
}