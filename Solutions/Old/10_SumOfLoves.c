#include <stdio.h>
#include <string.h>

/*
 * โจทย์: ผลรวมความรัก (SumOfLoves / Quicksum)
 * หัวข้อ: String with Spaces + ASCII Mapping + Accumulator Formula
 * แนวคิด:
 *   - ข้อความอาจมีช่องว่าง (Space) หลายช่องคั่นอยู่
 *   - ข้อควรระวัง: ห้ามใช้ scanf("%s", str) เพราะจะหยุดทันทีที่เจอช่องว่างแรก!
 *     ต้องใช้ scanf("%[^\n]", str) เพื่ออ่านทั้งบรรทัดรวมช่องว่าง
 *   - การคำนวณ:
 *     ตำแหน่งตัวอักษรเริ่มนับ 1 ถึง len
 *     ค่าของตัวอักษร: 'A' = 1, 'B' = 2, ..., 'Z' = 26 (คำนวณจาก ch - 'A' + 1)
 *     ค่าของช่องว่าง ' ' = 27
 *     Checksum = sum(ตำแหน่ง * ค่าตัวอักษร)
 */

int main() {
    char str[300];
    scanf("%[^\n]", str);

    long long checksum = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int pos = i + 1; // ลำดับเริ่มจาก 1
        int char_val = 0;
        if (str[i] == ' ') {
            char_val = 27;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            char_val = str[i] - 'A' + 1;
        }
        checksum += (long long)pos * char_val;
    }

    printf("%lld\n", checksum);
    return 0;
}

