#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
const int MAXLENGTH = 100 + 1;
const char text[30] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', '_', '.', ',', '?'};
const string morse[30] = {"01", "1000", "1010", "100", "0", "0010", "110",
"0000", "00", "0111", "101", "0100", "11", "10",
"111", "0110", "1101", "010", "000", "1", "001",
"0001", "011", "1001", "1011", "1100",
"0011", "1110", "0101", "1111"};

int main()
{
    int A[101];
    int i,j,k;
    int cas;
    string org,res,num,temp;
    cin >> cas;
    for(i=0;i<cas;i++)
    {
		org="";
		res="";
		num="";
        cin >> org;
       // cout << org.size()<< endl;
        for(j=0;j<org.size();j++)
		{
			for(k=0;k<30;k++)
			{
				if(text[k]==org.at(j))
				{
					A[j]=morse[k].size();
				//	cout<< A[j] << endl;
					num=num+morse[k];
				//	cout << num << endl;
					break;
				}
			}
		}
		//org=num;
		int count=0;
		for(j=org.size()-1;j>=0;j--)
		{
			temp.assign(num,count,A[j]);
			for(k=0;k<30;k++)
			{
				if(temp==morse[k])
				{
					res=res+text[k];
					break;
				}
			}
			count+=A[j];
		}
		cout << i+1 << ": " << res << endl;
	}
}

























