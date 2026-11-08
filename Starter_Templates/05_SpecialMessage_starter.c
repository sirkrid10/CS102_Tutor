/*
NAME: Your Name
SID: 66096xxxxx
*/

#include <stdio.h>
#include <string.h>

/*
 * โจทย์ที่ 5: ข้อความพิเศษ (SpecialMessage)
 * ข้อมูลเข้า: สตริงคั่นด้วย '_' (ไม่มี space นำหน้า/ปิดท้าย) เช่น "my_cat_is_on_the_table"
 * ข้อมูลส่งออก: จำนวนคำทั้งหมด และจำนวนคำที่ขึ้นต้นด้วยสระ (a, e, i, o, u ทั้งพิมพ์เล็ก/ใหญ่)
 */

// ฟังก์ชันช่วยเช็คสระ
int is_vowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char str[1005];
    if (scanf("%s", str) != 1) return 0;

    int total_words = 0;
    int vowel_words = 0;
    int len = strlen(str);

    // TODO 1: วนลูปตรวจเช็คตัวอักษรทีละตัว
    for (int i = 0; i < len; i++) {
        // TODO 2: ตัวอักษรที่ขึ้นต้นคำ คือตัวแรกสุด (i == 0) หรือตัวที่อยู่หลัง '_' (str[i-1] == '_')
        if (i == 0 || str[i - 1] == '_') {
            total_words++;

            // TODO 3: เช็คว่าตัวอักษรเริ่มต้นคำนี้เป็นสระหรือไม่
            if (is_vowel(str[i])) {
                vowel_words++;
            }
        }
    }

    // TODO 4: แสดงผลลัพธ์ (จำนวนคำทั้งหมด และจำนวนคำที่ขึ้นต้นด้วยสระ คั่นด้วยช่องว่าง)
    printf("%d %d\n", total_words, vowel_words);

    return 0;
}

