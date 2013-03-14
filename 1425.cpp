#include <vector>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
 #include <math.h>
 #define Node_Count  20
using namespace std;
typedef struct Node{
    int offset;
    char *key;
}Node_Info;

 vector<Node_Info *> v1,v2,v3;

 void Index_Create(string filename);
 void Index_Drop(string filename);
 void Index_Look(string filename,char *value);
  //#include "Index_Manage.h"


 void Index_Create(char* filename)
 {
    FILE *fp;
    int Total_Record,Attr_Num;
    int pos;
    //string file=filename+".index";
	//
    char s[6];
	int i;
	int d;
    Node_Info *node;
	//fp=fopen(filename,"r");
    if(!(fp=fopen(filename,"r")))
    {
        cout << "The file doesnot exits!\n";
		fclose(fp);
        return ;
    }
    fscanf(fp,"%d%d",&Total_Record,&Attr_Num);
	cout << Total_Record << endl << Attr_Num << endl;
    node=(Node_Info*)malloc(sizeof(Node_Info));
    pos=0;
	//s=new char[10];
	char t[6],w[6];
	char a;
    for( i=0;i<Total_Record;i++)
    {
        if(!feof(fp))fscanf(fp,"%s%s%s\n",s,w,t);
      //  fgetc(fp);
		cout << s << w << t << endl;
	//	sscanf(s,"%s %d %s",t,a,w);
        node->offset=pos;
        pos+=strlen(s);
        strcpy(node->key,s);
      /*  for(int j=0;j<Attr_Num-1;j++)
        {
            fscanf(fp,"%s",s);
            pos=pos+strlen(s);
        }*/
        v3.push_back(node);
    }
    int Total_Sec=(int)(sqrt(Total_Record));
    for( i=0;i<Total_Record;i+=20)
    {
        node->offset=v3[i]->offset;
        strcpy(node->key,v3[i]->key);
        v2.push_back(node);
    }
        //v2.push_back((Node_Info*)v3.at(i));
    for( i=0;i<v2.size();i+=20 )
    {
        node->offset=v2[i]->offset;
        strcpy(node->key,v2[i]->key);
        v1.push_back(node);
    }
        //v1.push_back(v2.at(i));
    fclose(fp);
    fp=fopen("out.txt","w");
    int v3_size,v2_size,v1_size;
    v3_size=v3.size();
    v2_size=v2.size();
    v1_size=v1.size();
    fprintf(fp,"%d ",v1_size);
    for( i=0;i<v1_size;i++)
      fprintf(fp,"%s %d",v1[i]->key,v1[i]->offset);
    fprintf(fp,"%d ",v2_size);
    for( i=0;i<v2_size;i++)
      fprintf(fp,"%s %d",v2[i]->key,v2[i]->offset);
    fprintf(fp,"%d ",v3_size);
    for( i=0;i<v3_size;i++)
      fprintf(fp,"%s %d",v3[i]->key,v3[i]->offset);
    fclose(fp);
 }
int main()
{
    char *s="in.txt";
    Index_Create(s);
}







