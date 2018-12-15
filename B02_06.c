//dung switch-case
#include <stdio.h>
#include <conio.h>

int main()
{
    int menu,numb1,numb2,total;

    printf("Nhap vao 2 so nguyen -->");
    scanf("%d %d", &numb1, &numb2);
    printf("Nhap vao mot chon lua\n");
    printf("1=cong\n");
    printf("2=tru\n");
    scanf("%d",&menu);
    switch(menu){
        case 1: total = numb1 + numb2; break;
        case 2: total = numb1 - numb2; break;
        default: printf("Thao tac bat hop le!\n");
    }
    if(menu==1)
        printf("%d cong %d la %d\n",numb1,numb2,total);
    else if(menu==2)
        printf("%d tru %d la %d\n",numb1,numb2,total);

    getch();
    return 0;
}
