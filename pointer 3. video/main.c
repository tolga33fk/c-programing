#include <stdio.h>
#include <stdlib.h>

int main()
{

 char harf='k';
 char *pt=&harf;


 printf("adres:%x \n",pt); //61fe17
 pt++;
printf("adres2:%x \n",pt); //61fe18
pt=pt-2;
printf("adres3:%x",pt); //61fe16






    return 0;
}
