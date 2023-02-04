#include <stdio.h>
#include <stdlib.h>

int main()
{
  //aylýk 2500tl alan kiþinin maaþýna yüzde istenen zam yapýlýrsa yeni maaþý??

int maas=2500;
float zam;
float yenimaas;
printf("istenilen zammi giriniz:");
scanf("%fl",&zam);
yenimaas=(maas*zam/100)+maas;
printf("yeni maasiniz:%f",yenimaas);





}

