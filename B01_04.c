/// tinh chu vi va dien tich hinh tron

#include <stdio.h>
#include <conio.h>

int main()
{
    float r, cv, s;
    const float pi = 3.14;

    printf("Nhap ban kinh r = "); scanf("%f", &r);
    cv = 2 * pi * r;
    s = pi * r * r;
    printf("CV = %.2f DT = %.2f", cv, s);

    getch();
    return 0;
}
