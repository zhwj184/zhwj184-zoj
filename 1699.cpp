#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

int main ()
{
    int board_size = 0;
    int num_players = 0;
    int num_cards = 0;
	while(cin >> num_players >> board_size >> num_cards)
	{
		if(num_players==0)
			break;
		vector<int> position(num_players,-1);
		string board;
		cin >> board;
		vector<string> deck(num_cards+1);
		for(int i = 0; i < num_cards; i++)
			cin >> deck[i];
		bool win = false;
		int current = 0;
		int i;
		for(i = 0; i < num_cards && !win; i++)
		{
			for(int j = 0; j < deck[i].size() && !win; j++)
			{
				int pos = board.find_first_of(deck[i][0],position[current]+1);
				if(pos < 0 || pos == board_size-1)
					win = true;
				else 
					position[current] = pos;
			}
			if(!win)
				current = (current+1 == num_players) ? 0 : current+1;

		}

	if (win)
	    cout << "Player " << current+1 << " won after " << i << " cards." << endl;
	else
	    cout << "No player won after " << num_cards << " cards." << endl;
	}
}