#include <stdio.h>
#include <conio.h>
int ucln(int a,int b){
    int uc;

    if(a<b) uc=a;
    else uc=b;

    while(a%uc!=0 || b%uc!=0)
        uc--;

    return uc;
}

main()
{
    int x,y;

    printf("nhap vao tu so: ");scanf("%d",&x);
    printf("nhap vao mau so: ");scanf("%d",&y);

    if(ucln(x,y)==1) printf("phan so da toi gian");
    else printf("phan so chua toi gian");

    getch();
}
