#include <stdio.h>
#include <stdlib.h>

int main()
{
   char bilgi[40];
   printf("mesaj: ");
   scanf("%s",bilgi);

   printf("%s",bilgi);



   printf("\n");

   printf("%10s",bilgi);  // saga 10 karakter kaydirdi.

   printf("\n");

   printf("%20.5s",bilgi); //

   printf("\n");

      printf("%-20s",bilgi); // bellekte saðdan karakter kaplar


}
