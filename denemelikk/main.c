#include <stdio.h>
#include <stdlib.h>

int main()
{

  int dizi[10]={45,32,98,65,42,78,87,54,32,11};
  int i,j;
  int yeni[10];
  int gecici;


  printf("sirasiz haliii \n");


  for(i=0;i<=9;i++)
    printf(" %d ",dizi[i]);

   printf("\n");
  printf("sirali halii \n");



  for(j=0;j<=9;j++)
  {


   for(i=0;i<=9;i++)
   {
       if(dizi[i]>dizi[i+1])
       {
           gecici=dizi[10];
           dizi[i]=dizi[i+1];
           dizi[i+1]=gecici;

       }



        printf(" %d ",dizi[i]);
   }




}
}
