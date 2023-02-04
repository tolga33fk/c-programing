#include <stdio.h>
#include <stdlib.h>

// faktoriyeli recursive fonksiyonu ile bulun...




#include <stdio.h>
int f(int x);
int main()
{
    int sonuc = f(3);
    printf("3! = %d\n", sonuc);
    return 0;
}
int f(int x)
{
    if (x == 1)
        return 1;
    else
        return x * f(x-1);
}
