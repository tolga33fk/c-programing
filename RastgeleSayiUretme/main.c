#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* rastgele para,zar ve 3 basamakli sayi secen ve
    icindeki olasiliklar da farkli olacak sekilde program yaz.*/

    // rastgele komutu icin time.h kutuphanesi kullanilir.
    //srand(time(NULL)) ise rastgelenin baslamasýný saglar.
    //rand() komutu ise rasgeleyi uretir.


    int para,zar,uc_basamak,tercih,i;

    srand(time(NULL));

    for(i=0;i<10;i++)
    {
        tercih=rand()%3;
        if(tercih==0)
        {
            para=rand()%2;
            if(para)
                printf("yazi\n");
            else
                printf("tura \n");


        }
         else if(tercih==1)
         {
            zar=rand()%5+1;
            printf("zarin degeri=%d \n",zar);
         }

        else if(tercih==2)
        {
            uc_basamak=rand()%900+100;
            printf("aklimdan tuttugum=%d \n",uc_basamak);
        }
        else
            printf("");


    }




}
