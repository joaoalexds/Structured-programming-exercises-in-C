#include <stdio.h>

int fatorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

float soma(float n){
    if(n == 1){
        return 2;
    }else{
        return (1+(n*n))/fatorial(n) + soma(n-1);
    }
}

int main()
{
    int a;
    float resultado;
    scanf("%i", &a);
    resultado = (float) soma(a);
    printf("%.2f", resultado);
    return 0;
}
