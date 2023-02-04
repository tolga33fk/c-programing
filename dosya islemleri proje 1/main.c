#include <stdio.h>
#include <stdlib.h>

// dosyaya int veri yazmak istiyorsan float veya double veri tiplerini kullanmalisin
// bu projenin amaci alinan verileri hem txt dosyasina yazdirip hem de okumasi
int main()
{

    FILE *dosya, *dosya2;


   if((dosya=fopen("D:\\c dersleri\\dosya islemleri proje 1\\kullanicilar.txt","w"))==NULL)
    {
        printf("dosya acilamadi");
            exit(1);
    }


        char isimsoyisim[30];
        double numara;
        char okul[30];
        double sinif;


        printf("ogrencinin ismi ve soyismi:");
        scanf("%s",&isimsoyisim);
        printf("ogrencinin numarasi:");
        scanf("%lf",&numara);
        printf("ogrencinin okulu:");
        scanf("%s",&okul);
        printf("ogrencinin sinifi:");
        scanf("%lf",&sinif);


        fprintf(dosya,"ismi ve soyismi:%s\n",isimsoyisim);
        fprintf(dosya,"numarasi:%0.lf\n",numara);
        fprintf(dosya,"okul:%s\n",okul);
        fprintf(dosya,"sinif:%0.lf\n",sinif);
        fclose(dosya);



        if((dosya2=fopen("D:\\c dersleri\\dosya islemleri proje 1\\kullanicilar.txt","r"))==NULL)
        {
            printf("dosya acilamadi");
            exit(1);
        }

        fscanf(dosya2,"ismi ve soyismi:%s\n",isimsoyisim);
        fscanf(dosya2,"numarasi:%0.lf\n",numara);
        fscanf(dosya2,"okul:%s\n",okul);
        fscanf(dosya2,"sinif:%0.lf\n",sinif);
        printf("okunan %s  %0.lf   %s  %0.lf",isimsoyisim,numara,okul,sinif);

        return 0;





}


