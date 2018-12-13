#include <stdio.h>
#include <conio.h>

int main()
{
    char letter;

    printf("Nhap vao mọt ki tu -->");
    scanf(" %c",&letter);

    if(letter>='A' && letter<='Z')
        printf("Ki tu trong doan A-Z\n");

    getch();
    return;
}
