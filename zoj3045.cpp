#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{

	map<string, int> song;
	map<string, int> vec;
	char szInput[80];
	int N;
	int stateResult;
	int count;

	while(cin >> N)
	{

		getchar();

		stateResult = 0;
		count = 0;
		song.clear();
		vec.clear();

		for(int i = 0; i < N; ++i)
		{
			  cin.getline(szInput, 80);
			  string str = szInput;
		
			  if(count == 0)
			  {
					if(song.find(str) == song.end())
					{
						song[str] = 1;
					}
					else
					{	
						count = i;
						vec[str] = 1;
					}
			  }
			  else
			  {
				  if(i % count == 0)
					  vec.clear();	
				  
				  if (vec.find(str) == vec.end())
					{
						vec[str] = 1;
					}
					else
					{
						stateResult = 1;
					}

					if(song.find(str) == song.end())
					{
						stateResult = 1;
					}


			  }

		}
/*
		count = song.size();

		for(map<string,int>::iterator iter = song.begin(); iter != song.end() && count > 0; iter++)
		{
			if((*iter).second != count && (*iter).second != count - 1)
			{
				stateResult = 1;
				break;
			}
		}

		for(int i = 0; i < N && stateResult == 0 && count != 0; i+= count)
		{
			song.clear();

			for(int j = i; j < i + count; j++)
			{
				if(song.find(astrSong[j]) == song.end())
				{
					song[astrSong[j]] = 1;
				}
				else
				{
					stateResult = 1;
					break;
				}
				int k;
				for(k = 0; k < count; k++)
				{
					if(astrSong[j].compare(astrSong[k]) == 0)
					{
						break;
					}
				}
				
				if(k == count)
				{
					stateResult = 1;
					break;
				}

			/*	if(vec.find(astrSong[j]) == vec.end())
				{
					stateResult = 1;
					break;
				}
			
			}
			if(1 == stateResult)
			{
				break;
			}
		}
*/
		if(0 == stateResult)
		{
			cout << "Either" << endl;
		}
		else
		{
			cout << "Random" << endl;
		}
	}

	return 0;
}