#include<stdio.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;

    printf("Enter the %d values: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    printf("Total sum is: %d",sum);


    return 0;
}
