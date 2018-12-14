#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    float x,sum;

    printf("nhap vao 1 day so cac so thuc xi (-1 de dung)\n");

    i=0;sum=0;
    do{
        printf("x%d=",i);scanf("%f",&x);
        if(x!=-1){
            sum=sum+x;
            i=i+1;
        }
    }while (x!=-1);

    printf("TB=%.2f",sum/i);

    getch();
    return 0;
}
