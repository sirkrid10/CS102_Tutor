#include <stdio.h>

/*
 * โจทย์: สลับค่าในเมทริกซ์ (SwapMatrix)
 * หัวข้อ: 2D Array Manipulation + Swap + Row-wise Maximum
 * แนวคิด:
 *   - รับข้อมูลเมทริกซ์ขนาด 4x5
 *   - รับพิกัด (r1, c1) และ (r2, c2)
 *   - ทำการสลับค่าระหว่างสองตำแหน่งนี้ด้วยตัวแปร temp
 *   - วนลูปหาค่ามากที่สุดของแต่ละแถว (0 ถึง 3) แล้วพิมพ์ออกมาคั่นด้วยช่องว่าง
 *   - จุดสำคัญ: ต้อง initialize max ของแต่ละแถวใหม่ทุกครั้งก่อนเริ่มลูปคอลัมน์!
 */

int main() {
    int m[4][5];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    // สลับค่า
    int temp = m[r1][c1];
    m[r1][c1] = m[r2][c2];
    m[r2][c2] = temp;

    // หาค่าสูงสุดของแต่ละแถว
    for (int i = 0; i < 4; i++) {
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

