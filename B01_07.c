///dao nguoc 1 so nguyen duong co dung 3 chu so

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;

    printf("Nhap vao 1 so co 3 chu so: "); scanf("%d",&n);
    if(n>=100 && n<=999)
        printf("So dao nguoc: %d%d%d", n%10, (n/10)%10, n/100);
    else printf("Ban phai nhap vao 1 so co 3 chu so");

    getch();
    return 0;
}
