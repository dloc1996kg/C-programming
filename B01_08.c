///dung chi thi tien xu li #define

#include <stdio.h>
#include <conio.h>

#define TAX_RATE 0.10 /* khong co */

int main()
{
    float balance;
    float tax;

    balance = 72.10;
    tax = balance * TAX_RATE;
    printf("Thue tren %.2f la %.2f\n", balance, tax);

    getch();
    return 0;
}
