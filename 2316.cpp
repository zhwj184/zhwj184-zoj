#include<iostream>
#include <cstdio>
#include <cstdlib>
#include<cctype>
#include <string>
using namespace std;
enum {
    SIZ = 10008,
};
int num, ans;
int cnt[SIZ];
int main(){
    int tstcase;
    scanf("%d", &tstcase);
    while(tstcase --){
    int i, a, b;
    scanf("%d%d ", &num, &i);
    memset(cnt, 0, sizeof(int)*(num+4));
    ans = i * 2;
    while(i--){
        scanf("%d%d", &a, &b );
        cnt[a]++, cnt[b]++;
    }
    for(i=1;i<=num;i++){
        ans += cnt[i] * (cnt[i] -1 );
    }

    printf("%d\n", ans);
        if(tstcase)
            printf("\n");
    }

    return 0;
}
