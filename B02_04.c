#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a,b,c,cv,dt,p;

    printf("Nhap vao do dai 3 canh cua tam giac: ");
    scanf("%f%f%f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
    {
        cv=a+b+c;
        p=cv/2;
        dt=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("CV=%f DT=%f",cv,dt);
    }
    else printf("khong tao thanh tam giac");

    getch();
    return 0;
}
