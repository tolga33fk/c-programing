#include <stdio.h>
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47

//define kullanarak mainde puan olarak yazilan her yere 2.19 gelir ve puan2 ile yazilan her yere 3.19 gelir.



int main()
{

  int turkce;
  int matematik;
  printf("turkce netiniz: \n");
  scanf("%d",&turkce);

  printf("matematik netiniz: ");
  scanf("%d",&matematik);


  float sozelpuan,sayisalpuan;

  sozelpuan=turkce*puan+matematik*puan2+50.25;
  sayisalpuan=turkce*puan+matematik*puan2+51.25;

  printf("toplam sozel puaniniz: %5.2f \n",sozelpuan);
    printf("toplam sayisal puaniniz: %5.2f \n",sayisalpuan);







    return 0;
}
