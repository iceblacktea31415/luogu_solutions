#include<stdio.h>
#include<math.h>
// 填上你觉得需要的其他头文件

int main() {
    int T;
    scanf("%d",&T);
    if (T == 1) {
        printf("I love Luogu!");
    } else if (T == 2) {
        printf("6 4");
    } else if (T == 3) {
        printf("3\n12\n2");
    } else if (T == 4) {
        printf("%.3lf",500.0/3.0);
    } else if (T == 5) {
        printf("%d",480/32);
    } else if (T == 6) {
        printf("%.4f",sqrt(117));
    } else if (T == 7) {
        printf("110\n90\n0");
    } else if (T == 8) {
        double pi=3.141593;
        printf("%.4f\n%.4f\n%.3f",2*pi*5,pi*25,4.0/3.0*pi*125);
    } else if (T == 9) {
        printf("22");
    } else if (T == 10) {
        printf("9");
    } else if (T == 11) {
        printf("%.4f",100.0/3.0);
    } else if (T == 12) {
        printf("13\nR");
    } else if (T == 13) {
        double pi=3.141593;
        double V1 = 4 * pi * 64 / 3.0, V2 = 4 * pi * 1000 / 3.0;
		printf("%d",(int)pow(V1 + V2, 1 / 3.0));
		
    } else if (T == 14) {
        printf("50");
    }
    return 0;
}
