/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>

/*
 * โจทย์ที่ 9: ผลบวกมากที่สุดของอาร์เรย์ย่อย (MaxSumSubArray)
 * ข้อมูลเข้า: N (6 <= N <= 100) ตามด้วยตัวเลข N ตัว (ค่า -100 ถึง 100)
 * ข้อมูลส่งออก: ผลบวกของสมาชิก 5 ตัวต่อเนื่องกันที่มากที่สุด
 */

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // TODO 1: คำนวณผลรวมของหน้าต่าง 5 ตัวแรก
    int current_sum = 0;
    for (int i = 0; i < 5; i++) {
        current_sum += arr[i];
    }

    // ข้อควรระวังระดับตำนาน: ห้ามตั้ง max_sum = 0 เพราะค่าอาจติดลบทั้งหมด!
    int max_sum = current_sum;

    // TODO 2: เลื่อนหน้าต่างขนาด 5 (Sliding Window) หรือใช้วิธีบวก 5 ตัวตรงๆ
    for (int i = 5; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - 5];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}

