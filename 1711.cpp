#include <fstream>
#include <iostream>
using namespace std;

const int MAXSIZE = 12;
int numsol, len, list[MAXSIZE];
int used[MAXSIZE];  // used[i] is 1 if list[i] is used in the sum

ifstream inf("Sum It Up.in");
ofstream outf("Sum It Up.out");

void findsum(int sum, int i,int skip)
{
	int newsum = sum - list[i];
	if( i == len)
		return ;
	if( list[i] != skip && newsum >= 0)
	{
		used[i] = 1;
		if( newsum == 0)
		{
			numsol++;
			for( int j = 0; j < i; j++)
				if(used[j])
					cout << list[j] << "+";
					//outf << list[j] << "+";
			cout << list[i] << endl;
		}
		else 
			findsum(newsum,i+1,-1);
	}
	used[i] = 0;
	findsum(sum,i+1,list[i]);

}

int main()
{
	int sum;
	//while( inf >> sum >> len)
	while( cin >> sum >> len)
	{
		numsol = 0;
		if(len == 0)
			break;
		for( int i = 0; i < len; i++)
			cin >> list[i];
			//	inf >> list[i];
		//outf << "Sums of " << sum << ":" << endl;
		cout << "Sums of " << sum << ":" << endl;
		findsum(sum, 0, -1);
		if( numsol == 0)
		//	outf << "NONE" << endl; 
		cout  << "NONE" << endl;
	}
}