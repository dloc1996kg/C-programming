#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c,max;
    printf("Nhap vao 3 so a,b,c: "); scanf("%f%f%f",&a,&b,&c);

    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    printf("max=%f",max);

    getch();
    return 0;
}
