//sap xep day n so thuc theo thu tu tang dan
#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int N){
    for(int i=0; i<N; i++){
        printf("phan tu thu %d: ", i); scanf("%d", &a[i]);
    }
}

void InMang(int a[], int N){
    for(int i=0; i<N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void SapXep(int a[], int N){
    int t;
    for(int i=0; i<N-1; i++)
        for(int j=i+1; j<N; j++)
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
}

int main()
{
    int b[20], N;

    printf("So phan tu thuc te cua mang N= ");
    scanf("%d", &N);

    Nhap(b, N);
    printf("mang vua nhap: ");
    InMang(b, N);
    SapXep(b, N); //goi ham sap xep
    printf("mang sau khi sap xep:");
    InMang(b, N);

    getch();
    return 0;
}
