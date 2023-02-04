#include <stdio.h>
#include <stdlib.h>

int main()
{

   int dizi[10000];
   int i,sayi,ortalama, toplam=0;
   printf("kac sayi girilecek:");
   scanf("%d",&sayi);

   for( i=0;i<sayi;i++)
   {
       printf("%d. sayinizi giriniz:",i+1);
       scanf("%d",&dizi[i]);
   }
   printf("\n\n");

   for( i=0;i<sayi;i++)
   {
       toplam=toplam+dizi[i];

   }
      printf("girilen sayilarin toplami:%d \n\n",toplam);

   ortalama=toplam/sayi;
   printf("girilen sayilarin ortalamasi:%d",ortalama);






}
