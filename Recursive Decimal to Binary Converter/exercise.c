#include <stdio.h>

int binario(int n) {
    
    if (n < 2) {
        return n;
    }
    else {
        return binario(n/2)*10 + n%2;
    }
}

int main() {
    int n;
    float resultado;
    
    scanf("%i", &n);
    
    resultado = binario(n);
    
    printf("%.0f\n", resultado);
    return 0;
}
