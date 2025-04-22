#include<stdio.h>
int main(){

    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[n][m];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    for(i = 0; i < n; i++){
         sum += arr[i][n-1-i];
    }
    printf("%d",sum);

    return 0;
}
