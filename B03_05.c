//tim so lon nhat cua day so thuc, xac dinh vi tri cua no
#include <stdio.h>
#include <conio.h>

int main()
{
    int n,vitri,i;
    float a,max;

    printf("day cua ban co bao nhieu so: ");scanf("%d",&n);

    if(n>0){
        printf("nhap vao so thu 1: ");scanf("%f",&a);
        max=a; vitri=1;
    }
    for(i=2;i<=n;i++){
        printf("nhap vao so thu %d: ",i); scanf("%f",&a);
        if(a>max){
            max=a;
            vitri=i;
        }
    }
    printf("so lon nhat tren day la %f, o vi tri %d", max, vitri);

    getch();
    return 0;
}
