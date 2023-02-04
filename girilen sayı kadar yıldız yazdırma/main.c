#include <stdio.h>

void main()
{

    int sayi;
    printf("Sayi giriniz : ");   //Burada girilen sayi kadar
    scanf("%d", &sayi);          //yýldýz ekrana yazdirilir.


    for (int i = 1;i <= sayi;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            printf("*");
        }

        printf("\n");
    }




    for (int k = sayi-1;k>=1;k--)
    {
        for(int m =k ; m>=1;m--)
        {
            printf("*");
        }
        printf("\n");
    }



    }








