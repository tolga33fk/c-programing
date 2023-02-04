#include <stdio.h>
#include <stdlib.h>

int main()
{

  FILE *dosya;
  char karakter[50];
  dosya=fopen("D:\\c dersleri\\dosya islemleri 4 fgets kullanimi\\fgets.txt","r");

  fgets(karakter,50,dosya);   //fgets(yazilanlari atiyacaginiz degisken,ayrilacak karakter sayisi,dosyamiz)
  puts(karakter);             // alt satir seklinde yazdirmaz

  fclose(dosya);









    return 0;
}
