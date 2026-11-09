

/*
 * โจทย์: มากกว่าค่าเฉลี่ย (MoreThanMean)
 * หัวข้อ: 1D Array + Two-Pass Processing
 * แนวคิด:
 *   - Pass 1: รับค่า n ตัว พร้อมสะสมผลรวม sum เพื่อหาค่าเฉลี่ย mean = sum / n
 *   - Pass 2: วนลูปตรวจเช็คว่ามีสมาชิกกี่ตัวที่มีค่ามากกว่า mean (arr[i] > mean)
 *   - จุดระวัง: ข้อมูลเป็นจำนวนจริง ต้องใช้ double หรือ float
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double arr[50];
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    double mean = sum / n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mean) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

