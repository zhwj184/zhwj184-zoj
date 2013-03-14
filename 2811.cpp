#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    const int MAX_K = 20;
    double val[MAX_K];
    while (true) {
        int K;
        scanf("%d", &K);
        if (K == 0) {
            return 0;
        }
        for (int i = 0; i < K; i++) {
            scanf("%lf", &val[i]);
        }
        sort(val, val + K);
        double sum = 0.0;
        double max = 0.0;
        bool good = false;
        for (int i = 0; i < K; i++) {
            max = val[i] > max ? val[i] : max;
            sum += val[i];
            if (sum - max >= max) {
                good = true;
                break;
            }
        }
        if (good) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}

