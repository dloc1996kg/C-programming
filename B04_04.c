#include <stdio.h>
#include <conio.h>
int tong;
int phantu;
int so_am;

int main()
{
    tong = 0;
    so_am = 0;
    while(1){
        printf("nhap vao 1 so de cong\n");
        printf("hoac 0 de dung: ");
        scanf("%d",&phantu);

        if(phantu == 0)
            break;

        if(phantu < 0){
            ++so_am;
            continue;
        }
        tong += phantu;
        printf("tong: %d\n",tong);
    }
    printf("tong sau cung %d\n",tong);
    printf("voi %d so am bi bo qua",so_am);
    getch();
    return 0;
}
