#include <stdio.h>

int main(){
	int arr[6][6];
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int r,c,sum=0;
	scanf("%d %d",&r,&c);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==r||j==c) sum += arr[i][j]; 
		}
	}
	sum += arr[r][c];
	printf("%d",sum); 
	return 0;
}
