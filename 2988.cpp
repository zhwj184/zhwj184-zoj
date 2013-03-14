#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
	int N;
	double t;
	char input[4];
	cin >> N;
	int cas = 1;
	while(N--)
	{
		cin >> t >> input;
		//cout << t << " " << input << endl;

		if((strcmp(input,"kg"))==0)
			printf("%d %.4lf lb",cas,2.2046*t);
		else if((strcmp(input,"lb"))==0)
			printf("%d %.4lf kg",cas,0.4536*t);
		else if((strcmp(input,"l"))==0)
			printf("%d %.4lf g",cas,0.2642*t);
		else if((strcmp(input,"g"))==0)
			printf("%d %.4lf l",cas,3.7854*t);
		cout << endl;
		cas++;
	}

}