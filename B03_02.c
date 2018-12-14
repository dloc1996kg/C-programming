#include <stdio.h>
#include <conio.h>

int main()
{
    char letter;
    for(letter = 'A'; letter <= 'E'; letter = letter + 1)
        printf("%c ", letter);

    getch();
    return 0;
}
