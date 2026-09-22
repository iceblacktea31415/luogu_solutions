#include <stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p=(a+b+c)*0.5;
    printf("%.1lf",sqrt(p*(p-a)*(p-b)*(p-c)));


    return 0;
}