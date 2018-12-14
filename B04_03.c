#include <stdio.h>
int tong;
int phantu;

int main()
{
    tong = 0;
    while(1){
        printf("nhap vao 1 so de cong\n");
        printf("hoac 0 de dung: ");
        scanf("%d",&phantu);

        if(phantu == 0)
            break;

        tong += phantu;
        printf("tong: %d\n",tong);
    }
    printf("tong sau cung %d\n",tong);
    return 0;
}
