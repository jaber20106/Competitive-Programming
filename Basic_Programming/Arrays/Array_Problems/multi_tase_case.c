    #include<stdio.h>
    int main(){

        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n;

            scanf("%d",&n);

            int arr[n];
            for(int j = 0; j < n; j++){
                scanf("%d",&arr[j]);
            }

            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[j] % 2 == 1){
                    count++;
                }
            }
            printf("%d\n",count);

        }

        return 0;
    }
