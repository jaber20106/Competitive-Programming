/* given n,m and array of n rows and m columns,
print the sum of all elements*/
#include<stdio.h>
int main(){

    int n,m,i,j;
    printf("Enter the size of array: ");
    scanf("%d%d",&n,&m);
    int arr[n][m];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            sum += arr[i][j];
        }
    }
    printf("%d\n",sum);


    return 0;
}
