#include <stdio.h>
#include <stdlib.h>

void listeler()  // geriye deðer döndürmeyen fonksiyondur kendisi
{
    printf("Ali Yildiz \n");
    printf("Ayse Ozturk \n");
    printf("Tolga Kucuk \n");
    printf("Ali Bozkurt \n");

}





int toplam(int s1 , int s2)  // geriye deðer döndüren fonksiyondur kendisi
{
    int s3;
    s3=s1+s2*5-10;
    return s3;


}





int main()
{
    listeler();

    int t;
    t=toplam(4,6);
     printf("%d \n",t);


      t=toplam(5,8);
       printf("%d",t);




   return 0;
}
