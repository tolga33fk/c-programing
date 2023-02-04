#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int b;

   printf("birinci sayiyi giriniz:");
   scanf("%d",&a);
   printf("ikinci sayiyi giriniz:");
   scanf("%d",&b);
   int toplam =a+b;


   if(toplam%2==0){
    printf("toplami:%d \n",toplam);
    printf("girdiginiz sayilarin toplami cifttir...");


   }
   else{
    printf("toplami:%d \n",toplam);
    printf("girdiginiz sayilarin toplami tektir...");


   }

}
