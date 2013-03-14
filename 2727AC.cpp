#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
using namespace std;
typedef struct node{
	char name[81];
	int year;
	int price;
}word;
word words[101];
int n;
int i,j;
string test;
int flag=0;
char w[81];
int y,p;
void sort()
{
	if(flag==0)
	{
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
				if(strcmp(words[i].name,words[j].name)>0)
				{
					strcpy(w,words[i].name);
					strcpy(words[i].name,words[j].name);
					strcpy(words[j].name,w);
					y=words[i].year;
					words[i].year=words[j].year;
					words[j].year=y;
					y=words[i].price;
					words[i].price=words[j].price;
					words[j].price=y;
				}
				else if(strcmp(words[i].name,words[j].name)==0)
				{
                     if(words[i].year>words[j].year)
					 {
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
					 }
					 else if(words[i].year==words[j].year)
					 {
					   if(words[i].price>words[j].price)
					   {
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
					   }
					 }

				}
			}
	}
	else if(flag==1)
	{
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
			
                if(words[i].year>words[j].year)
				{
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
			    }
				else if(words[i].year==words[j].year)
				{
                     if(strcmp(words[i].name,words[j].name)>0)
					 {
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
					 }
					 else if(strcmp(words[i].name,words[j].name)==0)
					 {
					   if(words[i].price>words[j].price)
					   {
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
					   }
					 }

				}
			}
	}
	else
	{
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
			
                if(words[i].price>words[j].price)
				{
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
			    }
				else if(words[i].price==words[j].price)
				{
                     if(strcmp(words[i].name,words[j].name)>0)
					 {
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
					 }
					 else if(strcmp(words[i].name,words[j].name)==0)
					 {
					   if(words[i].year>words[j].year)
					   {
                        strcpy(w,words[i].name);
						strcpy(words[i].name,words[j].name);
						strcpy(words[j].name,w);
						y=words[i].year;
						words[i].year=words[j].year;
						words[j].year=y;
						y=words[i].price;
						words[i].price=words[j].price;
						words[j].price=y;
					   }
					 }

				}
			}
	}
	for(i=0;i<n;i++)
		cout << words[i].name << " " << words[i].year << " " << words[i].price << endl;
	
}

		
int main()
{   int s=0;
	while(cin >> n && n)
	{
	    if(s>0) cout << endl;
		for(i=0;i<n;i++)
			cin >> words[i].name >> words[i].year >> words[i].price;
		cin >> test;
		if(test.compare("Year")==0) flag=1;
		else if(test.compare("Price")==0) flag=2;
		else flag=0;
		sort();
		s++;
	}
}


	

