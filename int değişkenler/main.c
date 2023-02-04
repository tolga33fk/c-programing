#include <stdio.h>
#include <stdlib.h>

int main()
{


int sayi1,sayi2,top,cik,bol,carp;


printf("1. sayiyi giriniz:");
scanf("%d",&sayi1);
printf("2.sayiyi giriniz:");
scanf("%d",&sayi2);

top=sayi1+sayi2;
cik=sayi1-sayi2;
bol=sayi1/sayi2;
carp=sayi1*sayi2;

printf("%d+%d=%d\n",sayi1,sayi2,top);
printf("%d-%d=%d\n",sayi1,sayi2,cik);
printf("%d/%d=%d\n",sayi1,sayi2,bol);  // sayý rasyonel ise tam kýsmýný alýr float veya double kullanýlabilir...
printf("%d*%d=%d\n",sayi1,sayi2,carp);











}
