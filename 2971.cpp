#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

string num[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",

"nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",

"seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty",

"seventy", "eighty", "ninety"};

int shu[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90};

int main()
{
	istringstream out;
	string buf,str;
	int n;
	int i,j,k,m;
	long ans,temp;
	n = 5;
	//getline(cin,str);
	//cout << str << endl;
	cin >> n;
	getchar();
	while(n--)
	{
		getline(cin,buf);
		//cout << buf << endl;
		ans = 0;
		temp = 0;
		out.clear();
		out.str(buf);
		//cout << buf.c_str << endl;
		//cout << out.str().c_str()<< endl;
		while(out >> str)
		{
			//cout << str.c_str() << endl;
			if(str.compare("million") == 0 || str.compare("thousand") == 0)
			{
				if(str.compare("million") == 0)
					ans = ans + temp * 1000000;
				else
					ans = ans + temp * 1000;
				temp = 0;
				//cout << ans << endl;
			}
			else if(str.compare("hundred") == 0)
			{
				temp = temp * 100;
				//cout << temp << endl;
			}
			else
			{
				int flag = 0;
				for(i = 0; i < 28; i++)
				{
					if(str.compare(num[i]) == 0)
					{
						flag = 1;
						break;
					}
				}
				if(flag)
					temp = temp + shu[i];
				//cout << num[i] << " " << shu[i] << endl;
			}
		}
		ans += temp;
		cout << ans << endl;
	}
}
