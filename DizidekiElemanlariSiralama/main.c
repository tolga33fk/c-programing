#include <stdio.h>
#include <stdlib.h>


//dizideki elemanlari kucukten buyuge siralama

int main()
{
    int dizi[]= {3,6,5,9,3,1,7};
    int i,j;
    int gecici;


    for(i=0; i<=6; i++)
    {
        printf(" %d ",dizi[i]);
    }

   for(i=0;i<=6;i++)
   {
       for(j=i+1;j<=6;j++)
       {
           if(dizi[i]>dizi[j])
           {
               gecici=dizi[i];
               dizi[i]=dizi[j];
               dizi[j]=gecici;
           }
       }
   }
   printf("\n \nsiralanmis halii: \n\n");

   for(i=0;i<=6;i++)
   {
       printf(" %d ",dizi[i]);
   }

}
