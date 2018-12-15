//in tam giac Pascal co n hang
#include <stdio.h>
#include <conio.h>
/*viet ham tinh giai thua*/
int gt(int n){
    int i, g=1;
    for(i=1; i<=n; i++)
        g=g*i;
    return g;
}
/*tinh to hop chap k cua n*/
int tohop(int n, int k){
    return gt(n)/(gt(k)*gt(n-k));
}

main(){
    int i,j,n;

    printf("nhap vao so hang cua cua tam giac: ");scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++)
            printf("%5d", tohop(i,j));

        printf("\n");
    }

    getch();
}
