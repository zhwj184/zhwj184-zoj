#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
struct Node{
     long start,end;
     int  pos;
 };
bool operator<(const Node &node1,const Node &node2)
{
     return node1.end< node2.end;
}
int main()
{
     vector<Node> vec;
     long n,m;
     long i,j,k;
     while(cin >> n)
     {
          if(n==0) break;
          vec.clear();
          for(i=0;i<n;i++)
          {
               Node node;
               cin >> node.start >> node.end;
               node.pos=i+1;
               vec.push_back(node);
          }
          sort(vec.begin(),vec.end());
          k=0;
          for(i=0;i<n;i++)
          {
               if(vec[i].start>k)
                 {
                   if(i==0)cout << vec[i].pos ;
                   else  cout << " " << vec[i].pos;
                   k=vec[i].end;
                  // if(i<n-1) cout << " ";
                 }
                 
               //else
                 //k=vec[i].end;
          }
          cout << endl;
     }
}
