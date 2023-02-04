#include <stdio.h>
#include <stdlib.h>

int main()
{
 // float deðiþkenler %f



/*
    float sayi1,sayi2,toplam;
    sayi1=5.85;
    sayi2=4.54;
    toplam=sayi1+sayi2;
    printf("%f",toplam);
*/



float s1,s2,s3,ort;

printf("1.sinavi giriniz:");
scanf("%fl",&s1);
printf("2.sinavi giriniz:");
scanf("%fl",&s2);
printf("3.sinavi giriniz:");
scanf("%fl",&s3);
ort=(s1+s2+s3)/3;
printf("sinav ortalamaniz:%f",ort);

}
