// ข้อ 6: ผลคูณของเวกเตอร์ที่สูงที่สุด (MaxProduct)
#include <stdio.h>

int main(){
    int m, i, j, arr[30][30];
    scanf("%d",&m);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int mx_row = -1;
    for(i=0;i<m;i++){
        int sum=0;
        for(j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(sum>mx_row) mx_row = sum;
    }
    int mx_col = -1;
    for(j=0;j<m;j++){
        int sum=0;
        for(i=0;i<m;i++){
            sum+=arr[i][j];
        }
        if(sum>mx_col) mx_col = sum;
    }

    printf("%d\n", mx_col * mx_row);
    return 0;
}