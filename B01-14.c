#include <conio.h>
#include <stdio.h>

int main()
{
    int g,p,tong;
    printf("tong so phut:");scanf("%d",&tong);
    g=tong/60;
    p=tong-g*60;
    printf("tong so gio va phut la: %d gio %d phut",g,p);

    getch();
    return 0;
}

