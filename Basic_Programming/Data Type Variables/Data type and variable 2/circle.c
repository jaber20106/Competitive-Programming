#include<stdio.h>
#include<math.h>
int main(){

    double r;
    scanf("%lf",&r);
    double circle = M_PI * r * r;
    double n = 2 * M_PI * r;
    printf("%lf %lf\n",circle,n);

    return 0;
}
