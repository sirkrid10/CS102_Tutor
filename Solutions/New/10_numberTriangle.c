// ข้อ 10: สร้างสามเหลี่ยมตัวเลขสูง N ชั้น (numberTriangle)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int val = i % 5;
        for (int j = 1; j <= i; j++) {
            printf("%d%c", val, (j == i ? '\n' : ' '));
            if (val == 0) {
                val = 4;
            } else {
                val--;
            }
        }
    }

    return 0;
}
