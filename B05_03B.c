//tinh giai thua co dung de qui
#include <stdio.h>
#include <conio.h>

int giaithua(int number)
{
    if(number == 0)
        return (1);
    else
        return (number * giaithua(number-1));
}
int main(){
    int n;

    printf("nhap vao 1 so: ");scanf("%d",&n);
    printf("giai thua=%d",giaithua(n));

    getch();
    return 0;
}
