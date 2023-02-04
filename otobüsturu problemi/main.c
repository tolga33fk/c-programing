#include <stdio.h>
#include <stdlib.h>





/* proje: switchcase yardýmý ile þehiriçi ve þehirler arasý olan 2 tur tanýmlanacak ve kiþi sayýsý istenecek her bir otobüsün
kapasitesi 48 kiþilik olacak. kiþi sayýsý girildiði zaman gerekli olan otobüs sayýsý,geriye kalan boþ koltuk sayýsý
,turun kar oraný((toplam kiþisayýsý/toplam koltuksayýsý)*100) ve zarar kar durumu(þehir içi:%60 altýndaysa zararlý ,
%60 ile 90 arasý normal , %90 üzeri karlý olarak yazdýrýlýr þehir dýþýnda tek fark %60 deðil %70 olmalýdýr.) bunlar yazdýrýlmalý.
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
