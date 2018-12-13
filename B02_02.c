#include <stdio.h>
#include <conio.h>

int main()
{
    int thg;

    printf("Nhap vao thang trong nam: "); scanf("%d",&thg);

    if(thg==1||thg==3||thg==5||thg==7||thg==8||thg==10||thg==12)
        printf("\n Thang %d co 31 ngay",thg);
    else if(thg==4||thg==6||thg==9||thg==11)
        printf("\n Thang %d co 30 ngay",thg);

    else if(thg==2)
        printf("\n Thang %d co 28 hoac 29 ngay",thg);
    else printf("Khong co thang %d",thg);

    getch();
    return 0;
}
