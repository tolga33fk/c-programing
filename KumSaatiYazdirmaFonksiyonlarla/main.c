#include <stdio.h>
#include <stdlib.h>


void kumsaati(int a,char karakter)
{
     char girilen;
     girilen=karakter;
     int i,j,giris;
    int yildiz,bosluk;
    giris=a;


    yildiz=2*giris-1;
    bosluk=0;



    for(i=0;i<giris;i++)
    {

        for(j=0;j<bosluk;j++)
            printf(" ");
        for(j=0;j<yildiz;j++)
            printf("%c",girilen);
        printf("\n");
        bosluk++;
        yildiz-=2;

    }

  yildiz=1;
  bosluk=giris-1;




    for(i=0;i<giris;i++)
    {
        for(j=0;j<bosluk;j++)
            printf(" ");
            for(j=0;j<yildiz;j++)
                printf("%c",girilen);
            printf("\n");
            bosluk--;
            yildiz+=2;

    }

return a;


}





int main()
{
  int a;
  char karakter;

   printf("girilecek karakter?:");
   scanf("%c",&karakter);

   printf("giris:");
   scanf("%d",&a);

   kumsaati(a,karakter);

}
