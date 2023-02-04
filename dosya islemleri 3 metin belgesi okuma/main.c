#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *dosya;
   char karakter;

   dosya=fopen("D:\\c dersleri\\dosya islemleri 3 metin belgesi okuma\\okunacak.txt","r");


do          /*eger do while kullanmazsam sadece  metindeki tek harfi
              alir hepsini yazdirmak icin donguye ihtiyacimiz vardir...*/
{
   karakter=getc(dosya);

   printf("%c",karakter);
}
while(karakter!=EOF);

   fclose(dosya);





    return 0;
}
