#include <stdio.h>
#include <conio.h>

int main()
{
    int n,i;
    float s1,s2,s3;

    printf("nhap n="); scanf("%d",&n);

    s1=0;
    for(i=1;i<=n;i++)
        s1=s1+i;
    printf("s1=%.2f\n",s1);

    s2=0;
    for(i=1;i<=n;i++)
        s2=s2+(float)i/(i+1);
    printf("s2=%.2f\n",s2);

    s3=0;
    for(i=1;i<=n;i++)
        if(i%2==0) s3=s3+i;
        else s3=s3-i;
    printf("s3=%.2f\n",s3);

    getch();
    return 0;
}
