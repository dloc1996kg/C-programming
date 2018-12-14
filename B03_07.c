#include <stdio.h>
#include <conio.h>

int main()
{
    int loai,sothang,i,solantinhlai;
    float tien;

    printf("nhap tien gui: ");scanf("%f",&tien);
    printf("loai gui. 0: ko thoi han, 1: co thoi han: ");
    scanf("%d",&loai);
    printf("so thang gui:");scanf("%d",&sothang);
    switch(loai){
    case 0:
        for(i=1;i<=sothang;i++)
            tien=tien+tien*2.4/100;
        break;
    case 1:
        solantinhlai=sothang/3;
        for(i=1;i<=solantinhlai;i++)
            tien=tien+(tien*4/100)*3;
        break;
    }

    printf("tong tien (von+lai suat) la: %.2f",tien);

    getch();
    return 0;
}
