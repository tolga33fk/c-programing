#include <stdio.h>
#include <stdlib.h>





/* proje: switchcase yard�m� ile �ehiri�i ve �ehirler aras� olan 2 tur tan�mlanacak ve ki�i say�s� istenecek her bir otob�s�n
kapasitesi 48 ki�ilik olacak. ki�i say�s� girildi�i zaman gerekli olan otob�s say�s�,geriye kalan bo� koltuk say�s�
,turun kar oran�((toplam ki�isay�s�/toplam koltuksay�s�)*100) ve zarar kar durumu(�ehir i�i:%60 alt�ndaysa zararl� ,
%60 ile 90 aras� normal , %90 �zeri karl� olarak yazd�r�l�r �ehir d���nda tek fark %60 de�il %70 olmal�d�r.) bunlar yazd�r�lmal�.
*/


int main()
{
   char secim;
   int kisi, otobus,bos;
   float oran;


   printf("gitmek istediginiz turu seciniz(i:yurtici  d:yurtdisi): ");
   scanf("%s",&secim);
   printf("kisi sayisi?: ");
   scanf("%d",&kisi);


   if(kisi%48==0)
   {
       otobus=kisi/48;
   }

   else
    {
    otobus=(kisi/48)+1;

    }


    bos=otobus*48-kisi;

    oran=((float)kisi/(otobus*48)*100);


   switch(secim)
   {
   case 'd':

    if(oran<70)
    {



    printf("gerekli olan otobus sayisi=%d \n",otobus);
    printf("bos koltuk sayisi=%d \n",bos);
    printf("kar orani=%f \n",oran);
    printf("kar durumu = zararli \n");

    }

       else if(oran>70 && oran<90)
       {
            printf("gerekli olan otobus sayisi=%d \n",otobus);
    printf("bos koltuk sayisi=%d \n",bos);
    printf("kar orani=%f \n",oran);
    printf("kar durumu= orta \n");

       }

       else
       {
            printf("gerekli olan otobus sayisi=%d \n",otobus);
    printf("bos koltuk sayisi=%d \n",bos);
    printf("kar orani=%f\n",oran);
    printf("kar durumu=cok karli\n");

       }


break;

       case 'i':

    if(oran<60)
    {



    printf("gerekli olan otobus sayisi=%d\n",otobus);
    printf("bos koltuk sayisi=%d\n",bos);
    printf("kar orani=%f\n",oran);
    printf("kar durumu= zararli\n");

    }

       else if(oran>60 && oran<90)
       {
            printf("gerekli olan otobus sayisi=%d\n",otobus);
    printf("bos koltuk sayisi=%d\n",bos);
    printf("kar orani=%f\n",oran);
    printf("kar durumu= orta\n");

       }

       else
       {
            printf("gerekli olan otobus sayisi=%d\n",otobus);
    printf("bos koltuk sayisi=%d\n",bos);
    printf("kar orani=%f\n",oran);
    printf("kar durumu=cok karli\n");

       }

break;

   }


   }
