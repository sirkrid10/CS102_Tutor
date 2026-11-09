// ข้อ 4: โซ่คำ (WordChains)
#include <stdio.h>
#include <string.h>

int main() {
    char str[1010];
    scanf("%s", str);

    int cnt_word = 1, cnt_chain = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == '_') {
            cnt_word++;
            if (str[i - 1] != str[i + 1]) {
                cnt_chain++;
            }
        }
    }

    printf("%d %d\n", cnt_word, cnt_chain);
    return 0;
}
