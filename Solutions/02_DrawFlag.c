#include <stdio.h>

/*
 * โจทย์: วาดธง (DrawFlag)
 * หัวข้อ: Nested Loops + Pattern Printing
 * แนวคิด:
 *   - ลูปนอก (i): วิ่งคุมแถว 0 ถึง R-1
 *   - ลูปใน (j): วิ่งคุมคอลัมน์ 0 ถึง C-1
 *   - แต่ละแถวเริ่มด้วย '@' ที่ j=0 และสลับด้วย '#' ที่ j=1
 *     ดังนั้น ใช้ j % 2 == 0 เพื่อพิมพ์ '@' และ j % 2 != 0 เพื่อพิมพ์ '#'
 *   - อย่าลืมขึ้นบรรทัดใหม่ \n เมื่อจบลูปในแต่ละแถว
 */

int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (j % 2 == 0) {
                printf("@");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}

