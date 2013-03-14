/*#include <stdio.h>  // 错误的分治
#include <string.h>

#define STRLEN 5001
 char s[STRLEN];
 char tmp[STRLEN];
int count;

bool IsPalinfrome(char *s)
{
    int len = strlen(s);
    for(int i=0;i<len/2+1;++i)
        if(s[i] != s[len-1-i]) return false;
    return true;
}

void MergeCount(int from, int to, char *s)
{
    if(to - from == 1)
    {
        ++count;
        return;
    }
    int mid = (from + to) >> 1;
    MergeCount(from, mid, s);  MergeCount(mid, to, s);
    memcpy(&tmp[0], &s[from], sizeof(char)*(mid - from));
    memcpy(&tmp[mid-from], &s[mid], sizeof(char)*(to - mid));
    tmp[to] = 0;
    if(IsPalinfrome(tmp) == true) ++count;
    return;
}

int main()
{
    while(gets(s))
    {
        count = 0;
        MergeCount(0, strlen(s), s);
        printf("%d\n", count);
    }
    return 0;
}
*/

#include <string.h>  // ac 
#include <stdio.h>  // fluke 2006.7.26

#define STRLEN 5001
 char s[STRLEN];
int count;

int main()
{
    while(gets(s))
    {
        int len = strlen(s);
        count = len;
        for(int i=1;i<len;++i)
        {
            for(int j=0;s[i-j-1]&&s[i+j];++j)
            {
                if(s[i-j-1] != s[i+j]) break;
                ++count;
            }
            for(int j=1;s[i-j]&&s[i+j];++j)
            {
                if(s[i-j] != s[i+j]) break;
                ++count;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
