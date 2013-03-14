#include <iostream>
using namespace std;

const int SIZE = 100;

int main(void)
{
	bool toss[SIZE];
	char dir[SIZE];
	int curr;
	int total;
	int n;
	while( cin >> n && n)
	{
		cin >> curr;
		curr--;
		for( int i = 0; i < n; i++)
		{
			cin >> dir[i];
			toss[i] = false;
		}
		total = 0;
		int num = 0;
		int last = 0;
		while( num < n)
		{
			total++;
			//last = 0;
			if( toss[curr] == false)
			{
				toss[curr] = true;
				num++;
			}
			int temp = last;
			
			last = curr;
			if(dir[curr] == 'L')
			{
				dir[curr] = 'R';
				curr = ( temp + n - 1 ) % n;
				if( curr == last)
				{
					curr = ( curr + n - 1) % n;
				}
			}
			else 
			{
				dir[curr] = 'L';
				curr = (temp + 1) % n;
				if( curr == last)
					curr = (curr + 1) % n;

			}
		}
	cout << "Classmate " << last+1 << " got the ball last after " << total << " tosses." << endl;
	}
}



