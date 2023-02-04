#include <stdio.h>
#include <stdlib.h>

int main()
{

  FILE *dosya;
  char veri1[20]="bilgisayar ";
  char veri2[20]="muhendisligi ";
  char veri3[10]="bolumu ";
  dosya=fopen("D:\\c dersleri\\dosya islemleri 5 fputs kullanimi\\fputs.txt","w");

  fputs(veri1,dosya);
  fputs(veri2,dosya);
  fputs(veri3,dosya);

// grafik islemleri ve dosya islemlerinin devamini isle mutlaka





    return 0;
}
