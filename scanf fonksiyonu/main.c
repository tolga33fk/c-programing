#include <stdio.h>
#include <stdlib.h>

int main()
{
/*char kitapad[30];
printf("kitabin adini giriniz:",kitapad);
scanf("%s",&kitapad);    // scanf boþluktan sonraki deðerleri almaz tek kelimeler için uygun olabilir
printf("girmis oldugunuz kitap:%s",kitapad);
*/


char ad[10],soy[25],yas[2],sehir[15],meslek[10];

printf("adiniz:");
scanf("%s",ad);
printf("soyadiniz:");
scanf("%s",soy);
printf("yasiniz:");
scanf("%s",yas);
printf("sehriniz:");
scanf("%s",sehir);
printf("mesleginiz:");
scanf("%s",meslek);

printf("adi:%s--soyadi:%s\n",ad,soy);
printf("yasi:%s--sehri:%s--meslegi:%s",yas,sehir,meslek);





}
