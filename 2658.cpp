#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;
void main()
{
   char A[3],B[3],C[3],D[3];
   char c1,cc;
   int c2;
   char num;
   int i,j,m,n;
   int b,c,d;
   int cas;
   cin >> cas;
   while(cas--)
   {
	   cin >> A >> B >> C >> D;
	   c1=A[1];
	   if(A[0]-'0'>0 && A[0]-'0'<=9) c2=A[0]-'0';
	   else if(A[0]=='T') c2=10;
	   else if(A[0]=='J') c2=11;
	   else if(A[0]=='Q') c2=12;
	   else c2=13;
	   if(B[1]=='H') b=20;
	   else if(B[1]=='C') b=40;
	   else if(B[1]=='D') b=60;
	   else if(B[1]=='S') b=80;
	   if(B[0]-'0'>0 && B[0]-'0'<=9) b+=(B[0]-'0');
	   else if(B[0]=='T') b+=10;
	   else if(B[0]=='J') b+=11;
	   else if(B[0]=='Q') b+=12;
	   else b+=13;
	   if(C[1]=='H') c=20;
	   else if(C[1]=='C') c=40;
	   else if(C[1]=='D') c=60;
	   else if(C[1]=='S') c=80;
	   if(C[0]-'0'>0 && C[0]-'0'<=9) c+=(C[0]-'0');
	   else if(C[0]=='T') c+=10;
	   else if(C[0]=='J') c+=11;
	   else if(C[0]=='Q') c+=12;
	   else c+=13;
	   if(D[1]=='H') d=20;
	   else if(D[1]=='C') d=40;
	   else if(D[1]=='D') d=60;
	   else if(D[1]=='S') d=80;
	   if(D[0]-'0'>0 && D[0]-'0'<=9) d+=(D[0]-'0');
	   else if(D[0]=='T') d+=10;
	   else if(D[0]=='J') d+=11;
	   else if(D[0]=='Q') d+=12;
	   else d+=13;
	   if(b<c&&c<d) m=1;
	   else if(b<c&&d<c&&d>b)m=2;
	   else if(c<b&&c<d&&b<d) m=3;
	   else if(b<c&&b>d&&c>d) m=4;
	   else if(b>c&&b>d&&c<d) m=5;
	   else if(b>c&&c>d) m=6;
	   n=(c2+m-1)%13;
	   n+=1;
	   if(n==10)cc='T';
	   else if(n==11) cc='J';
	   else if(n==12) cc='Q';
	   else if(n==13) cc='K';
	   else cc='0'+n;
	   cout << cc << c1 << endl;
   }	   
}


