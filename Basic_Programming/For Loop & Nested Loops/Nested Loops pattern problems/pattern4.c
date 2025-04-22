/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include<stdio.h>
int main(){

    int row,col,n;
    scanf("%d",&n);
    for(row = n; row >= 1; row--){
        for(col = 1; col <= row; col++){
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}


