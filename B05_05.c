//in day Fibonacci co de quy
#include <stdio.h>
#include <conio.h>

/*tim so fibonacci thu n*/
int fibo(int n){
    if(n==1 || n==2) return 1;
    else return fibo(n-1) + fibo(n-2);
}
main(){
    int i,n;

    printf("nhap vao 1 so n: ");scanf("%d",&n);

    printf("day fibo la: ");
    for(i=1; i<=n; i++)
        printf("%5d", fibo(i));

    getch();
}
