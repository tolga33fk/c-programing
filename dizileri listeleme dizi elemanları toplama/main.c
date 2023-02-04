#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dizideki sayýlarýn tümünü for ile yazdýrabilirsin

    /*
int sayi[]={10,20,30,40,50,60,70};

int i;

for(i=0;i<7;i++)
{
    printf("%d\n",sayi[i]);
}
*/


int sayi[]={10,15,20,25};
int toplam=0;
int i;

for(i=0;i<4;i++)
{
    toplam=toplam+sayi[i];
}
printf("toplam:%d",toplam);



}
