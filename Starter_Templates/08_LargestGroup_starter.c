/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>

/*
 * โจทย์ที่ 8: ตัวเลขจำนวนมากสุด (LargestGroup)
 * ข้อมูลเข้า: N (1 <= N <= 100) ตามด้วยตัวเลข N ตัว (ค่า 1 ถึง 20)
 * ข้อมูลส่งออก: ตัวเลขที่ซ้ำมากที่สุด และจำนวนครั้งที่ซ้ำ (ถ้าซ้ำเท่ากัน ให้ตอบตัวที่มีค่ามากกว่า)
 */

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // TODO 1: ประกาศ bucket array เก็บนับความถี่ (ค่า 1..20)
    int freq[25] = {0};

    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        freq[val]++;
    }

    int best_val = 0;
    int max_freq = -1;

    // TODO 2: วนลูปหาค่าที่ซ้ำมากที่สุด
    // เทคนิค: ใช้เงื่อนไข >= เพื่อให้ตัวเลขที่มากกว่าชนะการเสมอ (Tie-break)
    for (int v = 1; v <= 20; v++) {
        if (freq[v] >= max_freq && freq[v] > 0) {
            max_freq = freq[v];
            best_val = v;
        }
    }

    printf("%d %d\n", best_val, max_freq);
    return 0;
}

