#include <stdio.h>
#include <stdlib.h>

int main()
{

 int satir,sutun,i,j,k,n;
 int satir2,sutun2,x,y,z,m;
 int t,p,s,a;
 int matristoplam[2][2];
    printf("satir sayisi: ");
    scanf("%d",&satir);

    printf("sutun sayisi: ");
    scanf("%d",&sutun);


    int matris[satir][sutun];


    for(i=0; i<satir; i++)

    {
        for(j=0; j<sutun; j++)
        {
            printf("\n[%d][%d] ----->",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    for(k=0; k<satir; k++)
    {
        for(n=0; n<sutun; n++)
        {


            printf(" %d ",matris[k][n]);

        }

    printf("\n");


    }

    printf("---------------------------------");
    printf("\n\n");


     printf("satir sayisi: ");
    scanf("%d",&satir);

    printf("sutun sayisi: ");
    scanf("%d",&sutun);


    int matris2[satir][sutun];

    for(x=0; x<satir; x++)

    {
        for(y=0; y<sutun; y++)
        {
            printf("\n[%d][%d] ----->",x+1,y+1);
            scanf("%d",&matris2[x][y]);
        }
    }
    for(z=0; z<satir; z++)
    {
        for(m=0; m<sutun; m++)
        {


            printf(" %d ",matris2[z][m]);

        }

    printf("\n");


    }

    printf("------------------------- \n\n");


    for(t=0;t<satir;t++)
    {
        for(p=0;p<sutun;p++)
        {
            matristoplam[t][p]=matris[t][p]+matris2[t][p];
        }
    }

    for(s=0;s<satir;s++)
    {
        for(a=0;a<sutun;a++)
        {
            printf("%d ",matristoplam[s][a]);
        }
        printf("\n");
    }



}
