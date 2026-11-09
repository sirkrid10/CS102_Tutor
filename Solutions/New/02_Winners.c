// ข้อ 2: เข้ารอบกี่คน (Winners)
#include <stdio.h>

int main() {
    int n, arr[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[n - 1]) {
            cnt++;
        }
    }

    if (cnt == 0) {
        cnt = 1;
    }

    printf("%d\n%d\n", arr[n - 1], cnt);
    return 0;
}
