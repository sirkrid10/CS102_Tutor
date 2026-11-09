// ข้อ 5: นพลักษณ์ (Enneagram)
#include <stdio.h>

int main() {
    int n, m, arr[15] = {0};
    scanf("%d %d", &n, &m);
    int i;
    for (i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        arr[num]++;
    }
    int ans = 0;
    for (i = 1; i <= 9; i++) {
        ans += arr[i] % m;
    }
    printf("%d\n", ans);
    return 0;
}