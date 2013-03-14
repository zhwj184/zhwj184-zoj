#include<iostream>
#include<cctype>
#include<cstring>
#include <cstdlib>
#include <cmath>
using namespace std;
char name[10001][31];
#define PI 3.141592653589793
#define R 6378
double x[10001],y[10001],z[10001];
int total;

int mat(char *s){
	int i;
	for(i=0;i<total;i++)
		if(strcmp(name[i],s)==0)
			return i;
	total++;
	strcpy(name[total],s);
	return total;
}

int matt(char *s){
	int i;
	for(i=0;i<=total;i++)
		if(strcmp(name[i],s)==0)
			return i;
	return -1;
}

int main()
{
	char t[150];
	double lat,lng;
	char na[31];
	char sou[31],des[31];
	double dis;
	int n;
	total=-1;
	while(gets(t) && strcmp(t,"#")!=0){
		sscanf(t,"%s %lf %lf",na,&lat,&lng);
		n=mat(na);
	    lat=lat*PI/180.0;
		lng=lng*PI/180.0;
		z[n]=sin(lat);
		x[n]=cos(lat)*sin(lng);
		y[n]=cos(lat)*cos(lng);
	}
	//acout << total << endl;
	//for(int i=0;i<=total;i++)
	//	cout << x[i] << " " << y[i] << " " << z[i] << endl;
	while(cin >> sou >> des){
		if(strcmp(sou,"#")==0&&strcmp(des,"#")==0)
			break;
		int d,s;
		d=matt(sou);
		s=matt(des);
		cout << sou << " - " << des << endl;
		if(d==-1||s==-1) {
			cout << "Unknown" << endl;
			continue;
		}
		if(d==s) {
			cout << "0 km" << endl;
			continue;
		}
		dis=acos(x[d]*x[s]+y[d]*y[s]+z[d]*z[s]);
		//cout << dis << endl;
		dis=R*dis;
		printf("%.0f km\n",dis);
		//cout << dis << " km" << endl;
	}	

}