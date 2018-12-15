//tinh tong dung for
#include <stdio.h>
#include <conio.h>

int main()
{
    int total, loop;
    for(total = 0, loop = 1; loop <= 10; loop++)
        total = total + loop;

    printf("total = %d\n", total);

    getch();
    return 0;
}
