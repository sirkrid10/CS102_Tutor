/*
 * โจทย์: ตั๋วรถเมล์ (BusTicket)
 * หัวข้อ: Loop + Modulo + Digit Extraction (Digital Root)
 * แนวคิด:
 *   - วนลูปบวกเลขแต่ละหลักจนกว่าผลลัพธ์จะเป็นเลขหลักเดียว (n < 10)
 *   - ลูปใน: แกะเลขหลักหน่วยด้วย n % 10 แล้วตัดหลักทิ้งด้วย n /= 10
 *   - ลูปนอก: ทำซ้ำตราบใดที่ n >= 10
 */

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("%d\n", n);
    return 0;
}
