#include <stdio.h>

/*
 * โจทย์: ตัวเลขจำนวนมากสุด (LargestGroup)
 * หัวข้อ: Frequency Array / Bucket Counting + Tie-Breaking Logic
 * แนวคิด:
 *   - ตัวเลขมีค่าตั้งแต่ 1 ถึง 20 และ n <= 100
 *   - สร้าง bucket array freq[25] = {0} เก็บนับความถี่
 *   - กฎการ Tie-break: หากความถี่สูงสุดเท่ากัน ให้เลือกตัวเลขที่มีค่ามากกว่า
 *   - เทคนิค: วนลูปจาก 1 ถึง 20 ถ้าเจอความถี่ >= ความถี่สูงสุดเดิม ให้ override ทันที
 *     (เพราะ loop วิ่งจากน้อยไปมาก ค่าที่มากกว่าจะ override ค่าเดิมเมื่อความถี่เท่ากัน)
 *     หรือวนย้อนกลับจาก 20 ลงมา 1 แล้วเช็ค > อย่างเคร่งครัด
 */

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int freq[25] = {0};
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        freq[val]++;
    }

    int best_val = 0;
    int max_freq = -1;

    for (int v = 1; v <= 20; v++) {
        // ใช้ >= เพื่อให้ตัวเลขที่มากกว่าชนะการเสมอ (Tie-break)
        if (freq[v] >= max_freq && freq[v] > 0) {
            max_freq = freq[v];
            best_val = v;
        }
    }

    printf("%d %d\n", best_val, max_freq);
    return 0;
}

