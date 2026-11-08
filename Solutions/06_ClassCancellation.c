#include <stdio.h>
#include <math.h>

/*
 * โจทย์: การยกเลิกคลาสเรียน (ClassCancellation)
 * หัวข้อ: Simulation + Ceiling Math + Multiple Thresholds
 * แนวคิด:
 *   - รับ n (นศ.ทั้งหมด), k (เปอร์เซ็นต์ที่ต้องการ), t (เวลาที่ยอมให้สายได้)
 *   - รับเวลามาถึง ti จำนวน n บรรทัด (ti <= 0 คือตรงเวลา/มาก่อน, ti <= t คือถือว่ามาทัน)
 *   - นับจำนวนคนที่มาทัน (count_on_time)
 *   - เกณฑ์ขั้นต่ำ: k% ของ n แบบ "ปัดเศษขึ้นเสมอ" (ceil)
 *     ใช้สูตร integer: req = (n * k + 99) / 100 หรือ ceil((double)n * k / 100.0)
 *   - ถ้า count_on_time < req ให้ยกเลิก (พิมพ์ 0) มิฉะนั้นไม่ยกเลิก (พิมพ์ 1)
 *   - บรรทัดที่สอง พิมพ์จำนวนคนที่ขาด/ยังมาไม่ถึง = n - count_on_time
 */

int main() {
    int n, k, t;
    if (scanf("%d %d %d", &n, &k, &t) != 3) return 0;

    int count_on_time = 0;
    for (int i = 0; i < n; i++) {
        int ti;
        scanf("%d", &ti);
        if (ti <= t) {
            count_on_time++;
        }
    }

    // คำนวณ k% ของ n ปัดเศษขึ้นเสมอ
    int req = (n * k + 99) / 100;

    int is_cancelled = (count_on_time < req) ? 0 : 1;
    int missing = n - count_on_time;

    printf("%d\n", is_cancelled);
    printf("%d\n", missing);

    return 0;
}

