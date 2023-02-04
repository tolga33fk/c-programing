#include <stdio.h>
#include <stdlib.h>


/* enum yapisinin kullanim amaci mesela plakalar icin
kullanilabilir yani adana yazinca 01 veya mersin yazinca
33 cikmasi gibi islemlerde kullanilabilir...*/

enum sehirler
{

 adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir



};




int main()
{

enum sehirler il;

il=ankara;
printf("%d",il);




    return 0;
}
