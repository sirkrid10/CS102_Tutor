#include <stdio.h>
#include <string.h>

/*
 * โจทย์: ข้อความพิเศษ (SpecialMessage)
 * หัวข้อ: Strings + Delimiter Checking + Character Classification
 * แนวคิด:
 *   - ข้อความคั่นด้วย '_' และไม่มีช่องว่างนำหน้า/ต่อท้าย
 *   - ตัวอักษรตัวแรกของแต่ละคำจะอยู่ที่:
 *     1. ตำแหน่ง index 0 (คำแรกเสมอ)
 *     2. ตำแหน่งถัดจาก '_' นั่นคือ str[i-1] == '_'
 *   - เช็คว่าตัวอักษรเริ่มต้นนั้นเป็นสระหรือไม่ (a, e, i, o, u ทั้งเล็กและใหญ่)
 *   - นับจำนวนคำทั้งหมด (เท่ากับจำนวน '_' + 1 หรือนับจากจุดเริ่มคำ)
 */

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

    for (int i = 0; i < len; i++) {
        // จุดเริ่มต้นของแต่ละคำ
        if (i == 0 || str[i - 1] == '_') {
            total_words++;
            if (is_vowel(str[i])) {
                vowel_words++;
            }
        }
    }

    printf("%d %d\n", total_words, vowel_words);
    return 0;
}

