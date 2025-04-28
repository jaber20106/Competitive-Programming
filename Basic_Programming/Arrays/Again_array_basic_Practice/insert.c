#include<stdio.h>
int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n-1; i++){
        scanf("%d",&arr[i]);
    }

    int pos,value;
    printf("Enter the Position: ");
    scanf("%d",&pos);
    printf("Enter the value: ");
    scanf("%d",&value);

    printf("\noriginal array is: ");

    for(int i = 0; i < n-1; i++ ){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i = n-1; i >= pos - 1; i--){
        arr[i + 1] = arr[i];
        
    }
    arr[pos - 1] = value;
    printf("Update array: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}