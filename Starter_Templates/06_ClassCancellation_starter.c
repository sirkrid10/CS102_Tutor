/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>

/*
 * โจทย์ที่ 6: การยกเลิกคลาสเรียน (ClassCancellation)
 * ข้อมูลเข้า: บรรทัดที่ 1: n k t (จำนวนนศ., เปอร์เซ็นต์ที่ต้องการ, เวลาที่ยอมให้สายได้)
 *            บรรทัดที่ 2..n+1: เวลามาถึง ti (ti <= t ถือว่ามาทัน)
 * ข้อมูลส่งออก: บรรทัดที่ 1: 0 ถ้ายกเลิก, 1 ถ้าไม่ยกเลิก
 *              บรรทัดที่ 2: จำนวนคนที่ยังมาไม่ถึง (n - count_on_time)
 */

int main() {
    int n, k, t;
    if (scanf("%d %d %d", &n, &k, &t) != 3) return 0;

    int count_on_time = 0;

    // TODO 1: วนลูปรับเวลา ti ของนักศึกษาแต่ละคน
    for (int i = 0; i < n; i++) {
        int ti;
        scanf("%d", &ti);
        // TODO 2: นับคนที่มาทัน (ti <= t)
        if (ti <= t) {
            count_on_time++;
        }
    }

    // TODO 3: คำนวณ k% ของ n แบบ "ปัดเศษขึ้นเสมอ"
    // เทคนิค Integer: (n * k + 99) / 100
    int req = (n * k + 99) / 100;

    // TODO 4: ตรวจสอบว่าคลาสยกเลิกหรือไม่ (ถ้าน้อยกว่า req ให้ยกเลิก ตอบ 0)
    int is_cancelled = (count_on_time < req) ? 0 : 1;
    int missing = n - count_on_time;

    printf("%d\n", is_cancelled);
    printf("%d\n", missing);

    return 0;
}

