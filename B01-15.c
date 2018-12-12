#include <conio.h>
#include <stdio.h>

int main()
{
    int r1,r2,r3;
    float r,mr,mr1,mr2,mr3;
    printf("nhap R1:");scanf("%d",&r1);
    printf("nhap R2:");scanf("%d",&r2);
    printf("nhap R3:");scanf("%d",&r3);
    if(r1==0||r2==0||r3==0)
        printf("R1,R2 va R3 phai khac 0");
    mr1=1/r1;
    mr2=1/r2;
    mr3=1/r3;
    mr= mr1+mr2+mr3;
    r=1/mr;
    printf("tong tro R= %f om",r);

    getch();
    return 0;
}

