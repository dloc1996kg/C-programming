//tinh tong, trung binh cua 5 so
#include <stdio.h>
#include <conio.h>
float dulieu[5]; /*du lieu de tinh tong va trung binh*/
float tong; /*luu tong*/
float trungbinh; /*luu gia tri trung binh cua cac phan tu*/

int main()
{
    dulieu[0] = 34.0;
    dulieu[1] = 27.0;
    dulieu[2] = 45.0;
    dulieu[3] = 82.0;
    dulieu[4] = 22.0;
    tong = dulieu[0] + dulieu[1] + dulieu[2] + dulieu[3] + dulieu[4];
    trungbinh =tong/5.0;

    printf("tong %f trung binh %f\n", tong, trungbinh);

    getch();
    return 0;
}
