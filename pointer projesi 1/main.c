#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int *s=&sayi;


    printf("sayi giriniz:");
    scanf("%d",&sayi);

    printf("girilen sayi:%d \n",sayi);
    printf("girilen sayinin bellekteki adresi:%x",s);


    return 0;
}
