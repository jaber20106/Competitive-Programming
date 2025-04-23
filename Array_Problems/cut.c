#include<stdio.h>
int main(){

    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n + 5];
    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }

    int ind = n - k;
    for(int i = ind; i < n; i++){
        printf("%d ",ar[i]);
    }
    for(int i = 0; i < ind; i++){
        printf("%d ",ar[i]);
    }
    printf("\n");

    return 0;
}
