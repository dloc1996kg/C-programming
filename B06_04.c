//doi 1 so nguyen duong thap phan thanh so nhi phan
#include <stdio.h>
#include <conio.h>

int main()
{
    unsigned int N;
    unsigned int Du;
    unsigned int NhiPhan[20], K=0;

    printf("nhap vao so nguyen N= "); scanf("%d", &N);

    do
    {
        Du=N % 2;
        NhiPhan[K]=Du; //luu so du vao mang o vi tri K
        K++; //tang K len de lan ke luu vao vi tri ke
        N=N/2;
    }while(N>0);

    printf("dang nhi phan la: ");
    for(int i=K-1;i>=0;i--)
        printf("%d",NhiPhan[i]);

    getch();
    return 0;
}
