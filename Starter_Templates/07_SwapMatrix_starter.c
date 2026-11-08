/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>

/*
 * โจทย์ที่ 7: สลับค่าในเมทริกซ์ (SwapMatrix)
 * ข้อมูลเข้า: ตัวเลข 20 ค่า (ตาราง 4x5) จากนั้นรับพิกัด r1 c1 และ r2 c2
 * ข้อมูลส่งออก: ค่าสูงสุดของแต่ละแถวเรียงจากแถว 0 ถึง 3 คั่นด้วยช่องว่าง
 */

int main() {
    int m[4][5];

    // TODO 1: รับข้อมูลเมทริกซ์ 4x5
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    // TODO 2: สลับค่าตำแหน่ง (r1, c1) กับ (r2, c2) โดยใช้ตัวแปรพัก temp
    int temp = m[r1][c1];
    m[r1][c1] = m[r2][c2];
    m[r2][c2] = temp;

    // TODO 3: วนลูปหาค่าสูงสุดของแต่ละแถว
    for (int i = 0; i < 4; i++) {
        // ข้อควรระวัง: ต้องรีเซ็ต row_max เป็นตัวแรกของแถวเสมอในลูปนอก!
        int row_max = m[i][0];
        for (int j = 1; j < 5; j++) {
            if (m[i][j] > row_max) {
                row_max = m[i][j];
            }
        }
        printf("%d%c", row_max, (i == 3 ? '\n' : ' '));
    }

    return 0;
}

