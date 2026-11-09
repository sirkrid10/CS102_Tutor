

/*
 * โจทย์: คำนวณผลบวกในเมทริกซ์ (SumMatrix)
 * หัวข้อ: 2D Array + Row / Column Traversal
 * แนวคิด:
 *   - รับข้อมูลขนาด 4x4 ลงใน array 2 มิติ
 *   - รับพิกัดเป้าหมาย (r, c)
 *   - คำนวณ row_sum = ผลรวมของสมาชิกในแถว r ทั้งหมด
 *   - คำนวณ col_sum = ผลรวมของสมาชิกในคอลัมน์ c ทั้งหมด
 *   - แสดงผลรวมทั้งสอง (row_sum + col_sum)
 *   - ข้อสังเกต: ตัวตัดที่ตำแหน่ง (r, c) จะถูกบวกทั้งใน row_sum และ col_sum ตามตัวอย่างโจทย์
 */
#include <stdio.h>

int main() {
    int m[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int r, c;
    scanf("%d %d", &r, &c);

    int row_sum = 0;
    for (int j = 0; j < 4; j++) {
        row_sum += m[r][j];
    }

    int col_sum = 0;
    for (int i = 0; i < 4; i++) {
        col_sum += m[i][c];
    }

    printf("%d\n", row_sum + col_sum);
    return 0;
}

