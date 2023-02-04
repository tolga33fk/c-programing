#include <stdio.h>
#include <stdlib.h>



int toplam(int x1, int x2)
{
    int x3;
    x3=x1+x2;
    return x3;



}




int main()
{

    int x1,x2;
    printf("1. ve 2. sayiyi giriniz...\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
    int t;
    t=toplam(x1,x2);
    printf("sayilarin toplami:%d",t);




return 0;

}
