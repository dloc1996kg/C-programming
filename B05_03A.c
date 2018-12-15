//tinh giai thua khong dung de qui
#include <stdio.h>
#include <conio.h>

int giaithua(int number)
{
    int i, g=1;
    for(i=2;i<=number;i++)
        g=g*i;
    return g;
}

int main(){
    int n;
    printf("nhap vao 1 so: ");scanf("%d",&n);
    printf("giai thua=%d",giaithua(n));
    getch();
}
