#include <stdio.h>
#include <stdlib.h>

int main()
{
  // ||  :  veya operatörü birisi doðruysa hep doðru çýkar aksi halde yanlýþtýr
  //  &&  :  ve operatörü birisi yanlýþsa hepsi yanlýþtýr aksi halde doðrudur
  //  ! : not operatörü false iþlemi trueya , true iþlemi false iþleme çevirir
  // result : önerme doðruysa 1 yanlýþsa 0 deðerini verir



int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) equals to %d \n", result);



result=(a<=b+c)||(a==c);
printf("(a<=b+c)||(a==c) equals to %d \n",result);


}
