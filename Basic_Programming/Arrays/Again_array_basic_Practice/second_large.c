    #include<stdio.h>
    int main(){
        int n;
        printf("Enter the value: ");
        scanf("%d",&n);
        int ar[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&ar[i]);
        }
        int max = ar[0];
        int sec_max = -1;

        for(int i = 0; i < n; i++){
            if(ar[i] > max){
                max = ar[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(ar[i] < max && ar[i] > sec_max) {
                sec_max = ar[i];
            }
        }

        printf("%d\n",max);
        printf("%d\n",sec_max);


        return 0;
    }
