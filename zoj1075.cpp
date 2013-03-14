#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 12;

int main()
{
	string cards[SIZE];
	int flag = 0;

	cin >> cards[0];
	while(true)
	{
		for(int i = 1; i < SIZE; ++i)
		{
			cin >> cards[i];
		}

		cout << "CARDS:  ";
		//cout << "CARDS: ";
		for(int i = 0; i < SIZE; i++)
		{
			cout << cards[i] << (i == 11 ? '\n' : ' ');  
		}

		int count = 0;

		for(int i = 0; i < SIZE - 2; ++i)
		{
			for(int j = i + 1; j < SIZE - 1; ++j)
			{
				for(int k = j + 1; k < SIZE ; ++k)
				{
					int p;
					for(p = 0; p < 4; ++p)
					{
						if((cards[i][p] == cards[j][p] && cards[j][p] == cards[k][p]) || 
						   (cards[i][p] != cards[j][p] && cards[i][p] != cards[k][p] && cards[j][p] != cards[k][p]))
						   continue;
						else 
							break;
					}
					
					if(4 == p)
					{
						++count;
						if(1 == count)
						{
							cout << "SETS:   ";
						  //cout << "SETS:	";
						}
						else
						{
							cout << "        ";
							//cout << "   ";
						}
						cout << count << ".  "<< cards[i] << " " << cards[j] << " " << cards[k] << endl;
					}
				}
			}
		}

		if(0 == count)
		{
			cout << "SETS:   *** None Found ***" << endl;
		  //cout << "SETS:	*** None Found ***" << endl;
		}

		if(cin >> cards[0])
			cout << endl;
		else
			break;
	}

	return 0;
}