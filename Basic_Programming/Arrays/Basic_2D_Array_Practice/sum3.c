/* given n,m and array of n rows and m columns,
print the sum of elements of each row.*/

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
    for(j = 0; j < m; j++){
            int sum = 0;
        for(i = 0; i < n; i++){
            sum += arr[i][j];
        }
            printf("print the column sum: ");
            printf("%d\n",sum);
    }



    return 0;
}

