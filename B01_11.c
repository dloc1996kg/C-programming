///in ngay, thang, nam

#include <stdio.h>
#include <conio.h>

int main()
{
    int d,m,y;
    printf("nhap ngay: "); scanf("%d",&d);
    printf("nhap thang: "); scanf("%d",&m);
    printf("nhap nam: "); scanf("%d",&y);
    printf("ngay thang nam la: %d/%d/%d%d",d,m,(y/10)%10,y%10);

    getch();
    return 0;
}
