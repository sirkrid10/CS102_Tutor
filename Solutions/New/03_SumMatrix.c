// ข้อ 3: คำนวณผลบวกในเมทริกซ์ (SumMatrix)
#include <stdio.h>

int main() {
    int arr[6][6];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int r, c;
    scanf("%d %d", &r, &c);

    int sum = 0;
    for (int j = 0; j < 4; j++) {
        sum += arr[r][j];
    }
    for (int i = 0; i < 4; i++) {
        sum += arr[i][c];
    }

    printf("%d\n", sum);
    return 0;
}
