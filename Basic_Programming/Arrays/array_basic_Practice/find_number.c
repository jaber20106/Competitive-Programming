#include<stdio.h>
int main(){

    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int num;
    scanf("%d",&num);
    int found = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            found++;
            break;
        }
    }
    if(found){
        printf("Yes\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
