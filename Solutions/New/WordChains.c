#include <stdio.h>

int main(){
	char str[1010];
	scanf("%s",str);
	int cnt_word = 1, cnt_chain = 1;
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]=='_'){
			cnt_word++;
			if(str[i-1]!=str[i+1]) cnt_chain++;
		}
	}
	printf("%d %d",cnt_word,cnt_chain);
	return 0;
}
