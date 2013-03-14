#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    int i,j,k,m,n;
    int len;
    char c,ch;
    char s[200],t[200];
    m=1;
	int p,q;
    while((scanf("%s",s))!=EOF)
    {
        if((strcmp(s,"STOP"))==0) break;
        else if(m>=2) cout << endl;
        printf("Dataset #%d:  The initial order is %s.\n",m,s);
       // cout << "Dataset #" << m << ":  The initial order is " << s << "." << endl;
        m++;

       // cin >> n;
       scanf("%d",&n);
        strcpy(t," ");

        for(p=0;p<n;p++)
        {
			len=(strlen(s));
		//	cout << len << endl;
            cin >> ch;
            for(i=0;i<len;i++)
				if(s[i]==ch)
				{
					 k=i;break;
				}
           // cout << k << endl;
            if(k<=(len-1)/2)
            {
                for(i=0;i<k;i++)
                {
					t[i]=s[k-i-1];

                }
				for(i=k+1;i<len;i++)
					t[i-1]=s[i];
				strcpy(s,t);
			     s[len-1]='\0';
                strcpy(t," ");
			//	cout << s << endl;

            }
            else
            {
                for(i=0;i<k;i++)
                {
					t[i]=s[i];
                }
				for(i=k,q=1;i<len-1;i++,q++)
					t[i]=s[len-q];
			    strcpy(s,t);
                 s[len-1]='\0';			
                strcpy(t," ");
			//	 cout << s << endl;
            }
            printf("After %c leaves, the order is %s.\n",ch,s);
           // cout << "After " << ch << " leaves, the order is " << s << "." << endl;

        }
    }
}


