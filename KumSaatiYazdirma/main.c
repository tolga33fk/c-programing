#include <stdio.h>
#include <stdlib.h>





int main()
{
    int i,j,giris;
    int yildiz,bosluk;
    printf("giris:");
    scanf("%d",&giris);

    yildiz=2*giris-1;
    bosluk=0;



    for(i=0;i<giris;i++)
    {

        for(j=0;j<bosluk;j++)
            printf(" ");
        for(j=0;j<yildiz;j++)
            printf("X");
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
                printf("X");
            printf("\n");
            bosluk--;
            yildiz+=2;

    }






}
