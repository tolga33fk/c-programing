#include <stdio.h>
#include <stdlib.h>

int main()
{

  int sayi=20;
  int *s=&sayi; //pointer oldugunu degiskenin onunde * varsa bellekte yer kapladıgı yani pointer oldugu anlasılır...


  //sayiyi ekrana yazdirma
  printf("deger: %d \n",sayi);


  //adresi ekrana yazdirma
  printf("adres:%x \n",s);


  char harf='a';
  char *h=&harf;

  //harfi ekrana yazdirma
  printf("harf:%c \n",harf);

  //adresi ekrana yazdirma
  printf("adres:%x",h);



    return 0;
}
