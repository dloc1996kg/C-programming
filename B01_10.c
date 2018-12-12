///tinh diem trung binh

#include <stdio.h>
#include <conio.h>

int main()
{
    float t,l,h,tb;
    printf("nhap diem mon Toan: "); scanf("%f", &t);
    printf("nhap diem mon Ly: "); scanf("%f", &l);
    printf("nhap diem mon Hoa: "); scanf("%f", &h);
    tb=(t+l+h)/3;
    printf("diem trung binh la: %.2f",tb);

    getch();
    return 0;
}
