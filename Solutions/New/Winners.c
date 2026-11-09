#include <stdio.h>

int main(){
	int i,n,arr[20];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int cnt=0;
	for(i=0;i<n-1;i++){
		if(arr[i]>arr[n-1]) cnt++; 
	}
	if(cnt==0) cnt = 1;
	printf("%d\n%d",arr[n-1],cnt);
	return 0;
}
