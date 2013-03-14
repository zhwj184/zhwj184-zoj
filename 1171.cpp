#include <stdio.h>

int main()
{
	char input[100050];
	int count;
	int block;
	char ch;
	int k;
	//cin >> block;
	scanf("%d",&block);
	for(int i=0;i<block;i++)
	{
		int num;
		//cin >> num;
		scanf("%d",&num);
		int j=0;
		while(j<num)
		{
			//cin >> ch;
			scanf("%c",&ch);
			if(ch=='D' || ch=='U')
				input[j++]=ch;
		}
		//for(k=0;k<num;k++) cout << input[k];
		//cout << endl;
		count=0;
		for(k=1;k<num;k++)
			if(input[k]!=input[k-1])
				count++;
		//cout << count << endl;
		printf("%d\n",count);
		if(i<block-1) 
			printf("\n");//cout << endl;
	}
}
		
