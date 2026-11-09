// ข้อ 7: ผลบวกน้อยที่สุดของอาร์เรย์ย่อย (MinSumSubArray)
#include <stdio.h>

int main() {
    int n, arr[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    for (int i = 0; i <= n - 5; i++) {
        int sum = arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] + arr[i + 4];
        if (sum < min_sum) {
            min_sum = sum;
        }
    }

    printf("%d\n", min_sum);
    return 0;
}
