#include <stdio.h>
#include <stdlib.h>

int main()
{
  // ||  :  veya operat�r� birisi do�ruysa hep do�ru ��kar aksi halde yanl��t�r
  //  &&  :  ve operat�r� birisi yanl��sa hepsi yanl��t�r aksi halde do�rudur
  //  ! : not operat�r� false i�lemi trueya , true i�lemi false i�leme �evirir
  // result : �nerme do�ruysa 1 yanl��sa 0 de�erini verir



int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) equals to %d \n", result);



result=(a<=b+c)||(a==c);
printf("(a<=b+c)||(a==c) equals to %d \n",result);


}
