///tinh chu vi va dien tich tam giac

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a,b,c,cv,s,p;
    printf("Nhap a: "); scanf("%f",&a);
    printf("Nhap b: "); scanf("%f",&b);
    printf("Nhap c: "); scanf("%f",&c);
    cv=a+b+c;
    p=cv/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("cv=%.2f s=%.2f",cv,s);

    getch();
    return 0;
}
