//giai phuong trinh bac nhat
#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b;

    printf("a="); scanf("%f",&a);
    printf("b="); scanf("%f",&b);

    if(a==0)
        if(b==0) printf("Phuong trinh vo so nghiem");
        else printf("Phuong trinh vo nghiem");
    else printf("Phuong trinh co nghiem x=%.2f", -b/a);

    getch();
    return 0;
}
