// ข้อ 8: เห็ดป่า (Mushroom)
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);

    int c1 = 0, c2 = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == 'W' || s1[i] == 'Y') {
            c1++;
        }
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == 'W' || s2[i] == 'Y') {
            c2++;
        }
    }

    if (c1 > c2) {
        printf("1\n%d\n", c1 - c2);
    } else if (c2 > c1) {
        printf("2\n%d\n", c2 - c1);
    } else {
        printf("0\n0\n");
    }

    return 0;
}
