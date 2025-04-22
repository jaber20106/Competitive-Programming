#include<stdio.h>
int main(){

    int N,i,j;
    scanf("%d",&n);
    int arr[N][N];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;

    for(i = 0, j = n-1; i < n; i++,j--){
        sum += arr[i][j];
    }
    printf("%d",sum);

    return 0;
}
