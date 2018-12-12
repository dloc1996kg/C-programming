///in ma ASCII va ki tu ke tiep

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Nhap vao 1 ki tu: "); scanf("%c", &ch);
    printf("Ma ASCII cua %c la: %d\n", ch, ch);
    printf("Ki tu ke tiep la %c", ch+1);

    getch();
    return 0;
}
