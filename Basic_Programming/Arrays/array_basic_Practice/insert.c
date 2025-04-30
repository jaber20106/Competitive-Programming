#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n+1];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int pos, value;
    printf("Enter the Position: ");
    scanf("%d", &pos);
    printf("Enter the value: ");
    scanf("%d", &value);

    printf("\nOriginal array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;

    printf("Updated array: ");
    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
