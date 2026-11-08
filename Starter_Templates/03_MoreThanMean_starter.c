/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>

/*
 * โจทย์ที่ 3: มากกว่าค่าเฉลี่ย (MoreThanMean)
 * ข้อมูลเข้า: บรรทัดที่ 1: N (1 <= N <= 40)
 *            บรรทัดที่ 2..N+1: ตัวเลขทศนิยม N จำนวน
 * ข้อมูลส่งออก: จำนวนข้อมูลที่มีค่ามากกว่าค่าเฉลี่ย
 */

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    double arr[50];
    double sum = 0.0;

    // TODO 1: Pass 1 - วนลูปรับค่า N ตัว เก็บลง array และสะสมผลรวม
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    // TODO 2: คำนวณค่าเฉลี่ย mean
    double mean = sum / n;

    int count = 0;
    // TODO 3: Pass 2 - วนลูปตรวจเช็คว่าสมาชิกตัวไหนมากกว่า mean (arr[i] > mean)
    for (int i = 0; i < n; i++) {
        if (arr[i] > mean) {
            count++;
        }
    }

    // TODO 4: แสดงผลลัพธ์
    printf("%d\n", count);

    return 0;
}

