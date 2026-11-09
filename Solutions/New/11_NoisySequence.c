// ข้อ 11: ลำดับถูกรบกวน (NoisySequence)
#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int target = a;
    int noise_sum = 0;
    int started = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (!started) {
            if (x == a) {
                started = 1;
                target = a + 1;
                if (target > b) {
                    break;
                }
            }
        } else {
            if (x == target) {
                target++;
                if (target > b) {
                    break;
                }
            } else {
                noise_sum += x;
            }
        }
    }

    if (!started) {
        printf("0\n");
    } else if (target > b) {
        printf("%d\n", noise_sum);
    } else {
        printf("%d\n", target - 1);
    }

    return 0;
}
