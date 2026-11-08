/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>
#include <string.h>

/*
 * โจทย์ที่ 10 (โบนัส): ผลรวมความรัก (SumOfLoves / Quicksum)
 * ข้อมูลเข้า: สตริงยาวไม่เกิน 255 ตัว มีตัวพิมพ์ใหญ่และช่องว่าง เช่น "MID WEST"
 * ข้อมูลส่งออก: ผลรวมเช็คซัม sum(ตำแหน่ง * ค่าตัวอักษร) โดย 'A'=1..'Z'=26 และ ' '=27
 */

int main() {
    char str[300];

    // ข้อควรระวัง: ห้ามใช้ scanf("%s", str) เพราะจะหยุดที่ space แรก
    // ต้องใช้ scanf("%[^\n]", str) เพื่ออ่านทั้งบรรทัด
    if (scanf("%[^\n]", str) != 1) return 0;

    long long checksum = 0;
    int len = strlen(str);

    // TODO 1: วนลูปอ่านตัวอักษรทีละตัว
    for (int i = 0; i < len; i++) {
        int pos = i + 1; // ตำแหน่งเริ่มนับจาก 1
        int char_val = 0;

        // TODO 2: เช็คว่าเป็นช่องว่าง (' ') ให้มีค่า 27
        if (str[i] == ' ') {
            char_val = 27;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // TODO 3: ตัวพิมพ์ใหญ่ 'A'..'Z' แปลงเป็นค่า 1..26
            char_val = str[i] - 'A' + 1;
        }

        checksum += (long long)pos * char_val;
    }

    printf("%lld\n", checksum);
    return 0;
}
