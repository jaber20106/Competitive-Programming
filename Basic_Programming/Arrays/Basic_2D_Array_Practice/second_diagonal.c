#include<stdio.h>
int main(){

    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i + j == n - 1){
                sum += arr[i][j];
            }
        }
    }
    printf("Print the value %d ",sum);
    printf("\n");


    return 0;
}

