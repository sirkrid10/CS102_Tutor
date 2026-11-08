#include <stdio.h>

/*
 * โจทย์: ผลบวกมากที่สุดของอาร์เรย์ย่อย (MaxSumSubArray)
 * หัวข้อ: 1D Array + Fixed-Size Sliding Window (Size 5)
 * แนวคิด:
 *   - หาผลรวมของสมาชิก 5 ตัวที่ต่อเนื่องกันที่มากที่สุด
 *   - จุดตายระดับตำนาน: ค่าในอาร์เรย์อาจติดลบทั้งหมด! (เช่น ตัวอย่างที่ 2 ได้คำตอบ -1)
 *     ห้ามกำหนด max_sum = 0 เป็นอันขาด! ต้องกำหนดเป็นผลรวมของหน้าต่างแรก หรือค่าลบมากๆ (-1000000)
 *   - เทคนิค:
 *     1. คำนวณผลรวม 5 ตัวแรก (i = 0 ถึง 4)
 *     2. เลื่อนหน้าต่าง (Sliding Window): บวกตัวใหม่ arr[i] และลบตัวเก่า arr[i-5]
 *        หรือใช้ Nested Loop ธรรมดา (เนื่องจาก n <= 100 ขนาดเล็กมาก)
 */

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // คำนวณหน้าต่างแรก
    int current_sum = 0;
    for (int i = 0; i < 5; i++) {
        current_sum += arr[i];
    }
    int max_sum = current_sum;

    // เลื่อนหน้าต่างขนาด 5 ไปจนสุดอาร์เรย์
    for (int i = 5; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - 5];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}

