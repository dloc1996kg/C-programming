#include <conio.h>
#include <stdio.h>

int main()
{
    int g,p,tong;
    printf("so gio:");scanf("%d",&g);
    printf("so phut:");scanf("%d",&p);

    tong=g*60+p;
    printf("tong so phut la: %d p",tong);

    getch();
    return 0;
}
