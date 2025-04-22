    #include<stdio.h>
    int main(){

        int n;
        scanf("%d",&n);
        for(int i = 0; i < n; i++){

            int arr[7];
            for(int j = 0; j < 7; j++){
                scanf("%d",&arr[j]);
            }
            int sum = 0;
            for(int j = 0; j < 7; j++){
                sum = sum + arr[j];
            }
            printf("%d ",sum);

        }
        printf("\n");


        return 0;
    }

