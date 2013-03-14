#include<iostream>
#include<cctype>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

string sym[16];
int num1,num2,sum;

int main()
{
    int i,j,k;
    sym[0]="{}";
    sym[1]="{{}}";
    //cout << sym[0] << endl << sym[1] << endl;
    for(j=2;j<16;j++)
    {
        sym[j]="{";
        for(k=0;k<j-1;k++)
            sym[j]=sym[j]+sym[k]+",";
        sym[j]=sym[j]+sym[j-1];
        sym[j]=sym[j]+"}";
    }
    //cout << sym[5] << endl;
   // for(j=0;j<16;j++)
    //cout << "j=:" << j << sym[j] << endl;
    //cout << sym[15].length() << endl;
    int cas;
    scanf("%d",&cas);
    //cin >> cas;
    char  str1[90000],str2[90000];
    while(cas--)
    {
        //cin >> str1 >> str2;
        scanf("%s%s",str1,str2);
        for(j=0;j<16;j++)
            if(strcmp(sym[j].c_str(),str1)==0)//sym[j].compare(str1)==0)
            {
                num1=j;
                break;
            }
        for(j=0;j<16;j++)
            if(strcmp(sym[j].c_str(),str2)==0)//sym[j].compare(str2)==0)
            {
                num2=j;
                break;
            }
        printf("%s\n",sym[num1+num2].c_str());
       //cout << sym[num1+num2] << endl;

    }


}

