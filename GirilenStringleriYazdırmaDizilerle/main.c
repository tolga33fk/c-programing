#include <stdio.h>
#include <stdlib.h>

int main()
{


    char karakter[100][100];
    int i,sayi;
            printf("girmek istediginiz metin sayisi:");
        scanf("%d",&sayi);


    for(i=0;i<=sayi;i++);
    {
       printf("girdiginiz metinler:",i);
       scanf("%s",&karakter[i]);
    }
    printf("\n\n");
    for(i=0;i<=sayi;i++)
    {
        printf("yazilan metinler:%s",karakter[i]);
    }




}
