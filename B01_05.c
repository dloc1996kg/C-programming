///tinh log_a(x)

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a, x;
    printf("a = "); scanf("%f", &a);
    printf("x = "); scanf("%f", &x);

    if(x>0 && a>0 && a!=1){
        printf("log_a(x) = %f", log(x)/log(a));
    }else printf("Ban phai nhap x>0, a>0 va a!=1");

    getch();
    return 0;
}
