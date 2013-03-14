#if 0

#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

const int MAXITERATOR = 15;
string strRes[MAXITERATOR + 1];
string strInput;
int blockNum;
int iter = 0;

void process(void);
void printResult(int state);

void printResult(int state)
{
	if(1 == state)
	{
		if(0 == iter)
			cout << strInput << " is self-inventorying" << endl;
		else
			cout << strInput << " is self-inventorying after " << iter << " steps" << endl;
	}
	else if(0 == state)
	{
		cout << strInput << " enters an inventory loop of length " << iter << endl;
	}
	else
	{
		cout << strInput << " can not be classified after 15 iterations" << endl;
	}

}

void process(void)
{

	for(int i = 0; i <= MAXITERATOR; ++i)
	{
		strRes[i] = "";
	}
	
	char strTemp[10];
	int aNumber[11] ;

	int stateResult = -1;

	iter = 0;


	strRes[0] = strInput;
	
	

	while(iter < MAXITERATOR )
	{
		memset(aNumber, 0, sizeof(aNumber));
		
		for(int j = 0; j < strRes[iter].length(); ++j)
		{
			aNumber[strRes[iter][j] - '0' ]++;
		}

		iter++;

		for(int j = 0; j < 10; ++j)
		{
			if(aNumber[j] != 0)
			{
				sprintf(strTemp, "%d%d", aNumber[j], j);
				strRes[iter] = strRes[iter] + strTemp;
				
				//sprintf(strRes[iter], "%s%d%d", strRes[iter].c_str(), aNumber[j], j);
			}
		}
		
	//	cout << iter << " : " << strRes[iter] << endl;
		
		if(strRes[iter].compare(strRes[iter - 1]) == 0)
		{
			iter--;
			stateResult = 1;
			break;
		}

		for(int j = 0; j < iter  ; ++j)
		{
			if(strRes[iter].compare(strRes[j]) == 0)
			{
				iter = iter - j;
				stateResult = 0;
				break;
			}
		}

		if(0 == stateResult)
		{
			break;
		}
	}

	printResult(stateResult);
	
	return ;
}

int main()
{
	cin >> blockNum;
	while(blockNum--)
	{
		while(cin >> strInput)
		{
			if(strInput.compare("-1") == 0)
				break;
			process();
		}

		if(blockNum > 0)
			cout << endl;
	}
	return 0;
}



#endif 0