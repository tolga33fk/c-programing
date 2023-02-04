#include <stdio.h>
#include <stdlib.h>

int main()
{


    FILE *dosya;
    dosya=fopen("D:\\c dersleri\\dosya islemi 1. odev\\kendim.txt","w");

    fputs("adi soyadi:tolga kucuk",dosya);
    fputs("\n",dosya);
    fputs("numara:220201009",dosya);
    fputs("\n",dosya);
    fputs("okulu:kocaeli universitesi",dosya);

    fclose(dosya);





    return 0;
}
