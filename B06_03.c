//mang duoc khoi tao gia tri ban dau
#include <stdio.h>
#include <conio.h>

main()
{
    int i;
    static int values[] = {1,2,3,4,5,6,7,8,9};
    static char word[] = {'H','e','l','l','o'};
    for(i = 0; i < 9; ++i)
        printf("values[%d] is %d\n", i, values[i]);

    getch();
}
