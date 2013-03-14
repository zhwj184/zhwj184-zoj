#include <iostream>
#include <cstdio>
using namespace std;

#define BEGIN   'C'
#define END     'R'

int main()
{
	int player[56] = {0};
	int hit[56] = {0};
	int kill[56] = {0};
	int err[56] = {0};
	int block[56] = {0};
	int dig[56] = {0};
	int sum_hit = 0;
	int sum_kill = 0;
	int sum_err = 0;
	int sum_block = 0;
	int sum_dig = 0;

	double hit_percent = 0.0;
	double kpg = 0.0;
	double bpg = 0.0;
	double dpg = 0.0;

	int count = 0;
	int n;
	int num;

	char key;

	while(cin >> key)
	{
		switch(key){
			case BEGIN:
				cin >> n;
				for(int i = 0; i < n; ++i)
				{
					cin >> num;
					player[num]++;
				}
				count++;
				break;

			case 'H':
				cin >> num;
				hit[num]++;
				break;

			case 'K':
				cin >> num;
				kill[num]++;
				break;

			case 'E':
				cin >> num;
				err[num]++;
				break;

			case 'B':
				cin >> num;
				block[num]++;
				break;

			case 'D':
				cin >> num;
				dig[num]++;
				break;

			case END:
				cout << "Player  Hit Pct    KPG      BPG      DPG" << endl;
				cout << "-----------------------------------------" << endl;

				for(int i = 0; i < 56; ++i)
				{
					if(player[i])
					{
						hit_percent = 0.0;
						if(hit[i] + kill[i] + err[i])
						{
							hit_percent = (kill[i] - err[i]) * 1.0 / (hit[i] + kill[i] + err[i]);
						}

						kpg = (double)kill[i] / player[i];
						bpg = (double)block[i] / player[i];
						dpg = (double)dig[i] / player[i];

						printf("%02d      %+5.3f  % 7.3f  % 7.3f  % 7.3f", i, hit_percent, kpg, bpg, dpg);
						
						cout << endl;
					}
				}

				sum_hit = 0;
				sum_kill = 0;
				sum_err = 0;
				sum_block = 0;
				sum_dig = 0;

				for(int i = 0; i < 56; ++i)
				{
					sum_hit += hit[i];
					sum_kill += kill[i];
					sum_err += err[i];
					sum_dig += dig[i];
					sum_block += block[i];
				}

				hit_percent = 0.0;
				if(sum_err + sum_hit + sum_kill)
				{
					hit_percent = (sum_kill - sum_err) * 1.0 / (sum_hit + sum_err + sum_kill);
				}
				
				kpg = (double)sum_kill / count;
				bpg = (double)sum_block / count;
				dpg = (double)sum_dig / count;

				printf("team    %+5.3f  % 7.3f  % 7.3f  % 7.3f", hit_percent, kpg, bpg, dpg);
				
				cout << endl << endl;

				memset(player, 0, sizeof(player));
				memset(hit, 0, sizeof(hit));
				memset(kill, 0, sizeof(kill));
				memset(err, 0, sizeof(err));
				memset(block, 0, sizeof(block));
				memset(dig, 0, sizeof(dig));

				count = 0;


				break;
			default:
				break;
		}
	
	}

	return 0;
}