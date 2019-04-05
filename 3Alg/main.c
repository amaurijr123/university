#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,numinv = 0,aux;
    printf("Escolha um n\243mero com 3 algarismos: ");
    scanf("%d", &num1);
    while(num1 > 0){
        aux = num1 % 10;
        numinv = numinv * 10 + aux;
        num1 /= 10;
    }
    printf("O n\243mero invertido eh: %d", numinv);
    return(0);
}
