#include <stdio.h>
#include <stdlib.h>

int main()
{
int para=50;
int paraustu;
int misir=5;
int cips=8;
int kola=4;
int cikolata=3;

int kac1,kac2,kac3,kac4,toplam,carpim;

printf("istekleriniz nelerdir\n");
printf("misir=5tl--cips=8tl--kola=4tl--cikolata=3tl\n");
printf("misir:");
scanf("%d",&kac1);
printf("cips:");
scanf("%d",&kac2);
printf("kola:");
scanf("%d",&kac3),
printf("cikolata:");
scanf("%d",&kac4);

toplam=(misir*kac1)+(cips*kac2)+(kola*kac3)+(cikolata*kac4);

printf("TOPLAM TUTARINIZ:%dTL\n",toplam);


if(toplam<=50){

    paraustu=para-toplam;
    printf("PARA USTUNUZ:%dTL",paraustu);
}
else
printf("PARANIZ YETMIYOR...");

}
