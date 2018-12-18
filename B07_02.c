#include <conio.h>
#include <stdio.h>

int main()
{
    float a[10][10];
    int M,N;
    printf("ma tran co bao nhieu dong? "); scanf("%d", &M);
    printf("ma tran co bao nhieu cot? "); scanf("%d", &N);

    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
        {
            printf("phan tu o dong %d cot %d: ", i,j);
            scanf("%f",&a[i][j]);
        }

    printf("ma tran vua nhap: \n");
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
            printf("%.2f ",a[i][j]);
        printf("\n");
    }

    float T=0;
    int Min=(M>N) ? N: M; //tim gia tri nho nhat cua M va N
    for(int i=0;i<Min;i++)
        T=T+a[1][1];

    printf("tong cac phan tu o duong cheo chinh la: %f",T);

    getch();
    return 0;
}
