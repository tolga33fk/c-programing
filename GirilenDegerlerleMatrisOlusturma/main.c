#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j;
   printf("satir sayisi:");
   scanf("%d",&satir);
   printf("sutun sayisi:");
   scanf("%d",&sutun);


   for(i=1;i<=sutun;i++)
   {
       for(j=1;j<=satir;j++)
       {

            printf(" %d%d ",i,j);
       }
      printf("\n",i);
   }
}
