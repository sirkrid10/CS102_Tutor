#include <stdio.h>
#include <math.h>

int main(){
	char str[20];
	scanf("%s",str);
	if(strlen(str)%2 == 1){
		printf("INVALID TEXT");
		return 0;
	}
	int i;
	long long sum = 0;
	for(i=0;i<strlen(str);i+=2){
		sum += pow((str[i]-'0') - (str[i+1]-'0'), 4);
	}
	printf("%lld",sum);
	return 0;
}
