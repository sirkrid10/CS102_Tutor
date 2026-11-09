// ข้อ 9: ผลรวมความรัก (SumOfLoves)
#include <stdio.h>
#include <string.h>

int main() {
    char str[300];
    scanf("%[^\n]", str);

    long long sum = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        int pos = i + 1;
        int val = 0;
        if (str[i] == ' ') {
            val = 27;
        } else {
            val = str[i] - 'A' + 1;
        }
        sum += (long long)pos * val;
    }

    printf("%lld\n", sum);
    return 0;
}
