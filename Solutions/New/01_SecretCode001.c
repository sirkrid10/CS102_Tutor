// ข้อ 1: รหัสลับ001 (SecretCode001)
#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    scanf("%s", str);

    int len = strlen(str);
    if (len % 2 == 1) {
        printf("INVALID TEXT\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 0; i < len; i += 2) {
        int diff = (str[i] - '0') - (str[i + 1] - '0');
        sum += (long long)diff * diff * diff * diff;
    }

    printf("%lld\n", sum);
    return 0;
}
