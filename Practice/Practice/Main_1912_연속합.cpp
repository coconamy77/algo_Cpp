#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int n, sum, ans = -1e9, local_min = 0;
int main() {
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
        sum += a;
        ans = max(ans, sum - local_min);
        local_min = min(local_min, sum);
    }
    printf("%d", ans);
    
}