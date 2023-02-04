#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi1,sayi2,sayi3;

  printf("birinci sayiyi giriniz: ",sayi1);
  scanf("%d",&sayi1);
  printf("ikinci sayiyi giriniz:",sayi2);
  scanf("%d",&sayi2);
  printf("ucuncu sayiyi giriniz:",sayi3);
  scanf("%d",&sayi3);

  int ortalama=(sayi1+sayi2+sayi3)/3;

  printf("ortalamaniz:%d\n",ortalama);





  char ad[50];
  printf("ADINIZI GIRINIZ:",ad);
  scanf("%s",&ad);
  printf("ADINIZ:%s\n",ad);



  int a;

  printf("sayi giriniz:",a);
  scanf("%d",&a);
  printf("%d",a);


}
