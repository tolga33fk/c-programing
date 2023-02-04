#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i;
    for(i=0;i<=10;i++)
    {
    int a=rand()%11-10;
    printf("%d \n",a);
    }
}
