#include<stdio.h>
#include<math.h>

int main(){
    int h,r;
    scanf("%d%d",&h,&r);
    double c=3.14*r*r*h;
    int ans=(int)ceil(20000.0/c);
    printf("%d",ans);

    return 0;
}