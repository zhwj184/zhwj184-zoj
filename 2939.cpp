#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main(){
	string num[5001];
	int i,j,k,m,n;
	int flag1,flag2,flag3;
	for(i=1;i<=5000;i++)
	{
		flag1=1;
		flag2=1;
		flag3=1;
		n=i;
		num[i]="";
		while(n)
		{
			if(n>=1000)
			{
				n-=1000;
				num[i]+="M";
			}
			else if(n>=900 && n<=1000)
			{
				n-=900;
				num[i]+="CM";
			//	flag1=0;
			}
			else if(n>=500) 
			{
				n-=500;
				num[i]+="D";
			}
			else if(n>=400&&n<=1000)
			{
				n-=400;
				num[i]+="CD";
			//	flag1=0;
			}
			else if(n>=100)
			{
			 n-=100;
			 num[i]+="C";
			}
			else if(n>=90  && n<=100)
			{
				n-=90;
				num[i]+="XC";
			//	flag2=0;
			}
			else if(n>=50)
			{
				n-=50;
				num[i]+="L";
			}
			else if(n>=40 && n<=100)
			{
				n-=40;
				num[i]+="XL";
			//	flag2=0;
			}
			else if(n>=10)
			{
				n-=10;
				num[i]+="X";
				
			}
			else if(n>=9 &&n<=10)
			{
				n-=9;
				num[i]+="IX";
			//	flag3=0;
			}
			else if(n>=5 )
			{
				n-=5;
				num[i]+="V";
			}
			else if(n>=4  && n<=10)
			{
				n-=4;
				num[i]+="IV";
			//	flag3=0;
			}
			else if(n>=1){
				n-=1;
				num[i]+="I";
			}
		}
		//cout << num[i] << endl;
	}
	//for(i=1;i<=100;i++)
	//	cout << i << " " <<  num[i].c_str() << endl;
	int cas=1;
	while( cin >> n )
	{
		if(n==0)
			break;
		int sum=0;
		char  a[200];
		
		for(i=0;i<n;i++)
		{
		
			scanf("%s",a);
			//string b(a);
			//cout << a << endl;

			for(j=1;j<5001;j++)
			{
				if(strcmp(num[j].c_str(),a)==0)
				{
				//	cout << j << " " << a << endl;
					break;
				}
			}
			sum+=j;
		}
		cout << "Case " << num[cas] << ": ";
		cout << num[sum] << endl;
		cas++;
	}
}


