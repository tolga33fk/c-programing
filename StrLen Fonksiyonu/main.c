#include <stdio.h>
#include <stdlib.h>

int main()
{
    // strlen karakter yani katar sayisini yazar
    // merhaba  7 katarlidir
    // merhaba dunya boslukla birlikle 13 katarlidir

   printf("katar uzunlugu: %d \n",strlen("merhaba"));
   printf("katar uzunlugu: %d ",strlen("merhaba dunya"));

   char kelime[100];

   printf("kelime: ");
   scanf("%s",&kelime);
   printf("katar uzunlugu: %d",strlen(kelime));




   return 0;
}
