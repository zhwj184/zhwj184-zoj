/* zju2016 uva 10129 Play on Words
 * Algorithm Euler Path & UnionFind
 * fluke 2006.3.23
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int d[26], s[26];
    bool flags[26];
    while(t--)
    {
        scanf("%d", &n);
        memset(d, 0, sizeof(d));
        memset(flags, 0, sizeof(flags));
        for(int i=0;i<26;++i) s[i] = i;
        getchar();
        char ch, lastch;
        for(int i=0;i<n;++i)
        {
            ch = getchar();
            ++d[ch-'a'];
            int t = ch-'a';
            while(ch = getchar())
            {
                if(ch == '\n') break;
                lastch = ch;
            }
            --d[lastch-'a'];
            flags[t] = flags[lastch-'a'] = 1;
            for(int j=0;j<26;++j) if(s[j] == s[lastch-'a']) s[j] = s[t];
        }

        int c1 = 0, c2 = 0, sid = -1;  bool err = 0;
        for(int i=0;i<26;++i) if(flags[i])
        {
            if(d[i] == 0)
            {
                if(s[i] != sid)
                    if(sid == -1) sid = s[i];
                    else { err = 1; break; }
            }
            else if(d[i] == -1)
            {
                if(c1) err = 1;
                else c1 = 1;
            }
            else if(d[i] == 1)
            {
                if(c2)  err = 1;
                else c2 = 1;
            }
            else err = 1;
        }
        printf("%s\n", err ? "The door cannot be opened." : "Ordering is possible.");
    }
    return 0;
}
