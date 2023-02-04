#include <stdio.h>
#include <stdlib.h>

int main()
{

   char kaynak[30]="merhaba istanbul";
   char kopya[30]="";
   strcpy(kopya,kaynak);  //strcpy(kopyalanacak yer,kopyanin alinacagi yer);
   printf("%s",kopya);

   printf("\n\n");


   char nereden[30]="merhaba ankara";
   char nereye[30]="";

   strncpy(nereye,nereden,10); /* strncpy de ise ayni mantik
                              usttekiyle extradan 3. parametre ile kac karakterini
                               alabilecegini secebiliyorsun... */
  printf("%s",nereye);


    return 0;
}
