//nhap so nguyen n roi in so dao nguoc
#include <stdio.h>
#include <conio.h>

int main()
{
    int value, r_digit;

    value = 0;
    while(value <= 0)
    {
        printf("nhap vao 1 so nguyen de dao nguoc: ");
        scanf("%d",&value);
        if(value <= 0)
            printf("Phai la so duong\n");
    }

    while(value != 0)
    {
        r_digit = value % 10;
        printf("%d", r_digit);
        value = value/10;
    }

    printf("\n");

    getch();
    return 0;
}
