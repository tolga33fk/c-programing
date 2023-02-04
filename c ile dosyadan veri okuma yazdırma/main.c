#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fileapi.h>




int main()
{


remove("dosya.txt");

FILE *fp=fopen("dosya.txt","a");

char adi[50],soyadi[50],okulu[50],bolumu[50];
int sinifi;

   printf("ADINIZI GIRINIZ:");
   scanf("%s",&adi);


   printf("SOYADINIZI GIRINIZ:");
scanf("%s",&soyadi);


 printf("OKULUNUZU GIRINIZ:");
   scanf("%s",&okulu);


printf("BOLUMUNUZU GIRINIZ:");
scanf("%s",&bolumu);


 printf("KACINCI SINIF OLDUGUNUZU YAZINIZ:");
   scanf("%d",&sinifi);



fprintf(fp,"%s,%s,%s,&s,%d",adi,soyadi,okulu,bolumu,sinifi);



fclose(fp);













}

