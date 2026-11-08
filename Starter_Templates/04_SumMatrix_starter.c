/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>

/*
 * โจทย์ที่ 4: คำนวณผลบวกในเมทริกซ์ (SumMatrix)
 * ข้อมูลเข้า: ตัวเลข 16 ค่า (เมทริกซ์ 4x4) จากนั้นรับ r และ c (แถวและคอลัมน์เป้าหมาย เริ่มนับจาก 0)
 * ข้อมูลส่งออก: ผลรวมของสมาชิกแถว r + ผลรวมของสมาชิกคอลัมน์ c
 */

int main() {
    int m[4][4];

    // TODO 1: วนลูปรับค่าขนาด 4x4
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int r, c;
    scanf("%d %d", &r, &c);

    int row_sum = 0;
    // TODO 2: หาผลรวมของแถว r (แถว r คงที่ วิ่งหลัก j)
    for (int j = 0; j < 4; j++) {
        row_sum += m[r][j];
    }

    int col_sum = 0;
    // TODO 3: หาผลรวมของคอลัมน์ c (คอลัมน์ c คงที่ วิ่งแถว i)
    for (int i = 0; i < 4; i++) {
        col_sum += m[i][c];
    }

    // TODO 4: แสดงผลลัพธ์
    printf("%d\n", row_sum + col_sum);

    return 0;
}

