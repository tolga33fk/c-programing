#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    /*
       for(baslangic;bitis sarti;degisim)

       {

       dongu islemleri;

       }


    -----------------------------------------------

    while(kosul)  kosul oldugu surece devam eder


        -----------------------------------------


        do
    {
    islemler;          do icindeki islemler whiledekine uydugu surece devam eder uymadigi anda bitirir isi...
    }
    while(kosul);





    */

    int sayi;
    int i=1;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    do
    {
        if(i%3==0)
        {
        printf("sayi %d. \n",i);
        i++;
        }
        else
        {
            i++;
            printf("");
        }


    }
    while(i<=sayi);
    getch();


}
