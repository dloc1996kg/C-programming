//cong 2 ma tran
#include <conio.h>
#include <stdio.h>
void Nhap(int a[][10], int M, int N)
{
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
        {
            printf("phan tu o dong %d cot %d: ",i,j);
            scanf("%d", &a[i][j]);
        }
}

void InMaTran(int a[][10], int M, int N)
{
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

//cong 2 ma tran A va B ket qua la ma tran C
void CongMaTran(int a[][10], int b[][10], int M, int N, int c[][10])
{
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            c[i][j] = a[i][j] + b[i][j];;
}

int main()
{
    int a[10][10], b[10][10], M, N;

    printf("so dong M= "); scanf("%d", &M);
    printf("so cot M= "); scanf("%d", &N);

    printf("nhap ma tran A\n");
    Nhap(a,M,N);
    printf("nhap ma tran B\n");
    Nhap(b,M,N);
    printf("ma tran A: \n");
    InMaTran(a,M,N);
    printf("ma tran B: \n");
    InMaTran(b,M,N);

    int c[10][10]; // ma tran tong
    CongMaTran(a,b,M,N,c);
    printf("ma tran tong C: \n");
    InMaTran(c,M,N);

    getch();
    return 0;
}
