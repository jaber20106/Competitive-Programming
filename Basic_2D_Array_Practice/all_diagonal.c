#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int arr[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int md = 0, sd = 0;

    for(int i = 0; i < N; i++){
        md += arr[i][i];
    }
    for(int i = N-1, j=0; i >= 0; i--,j++){
        sd += arr[i][j];
    }

    int ans = abs(md - sd);
    printf("%d",ans);

    return 0;
}
