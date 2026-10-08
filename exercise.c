#include <stdio.h>

struct Cliente{
    char nome[50];
    char numero_telefone[20];
    int idade;
};

void imprimir_dados(int n, struct Cliente c[n]){
    for(int i = 0; i < n; i++){
        printf("%s", c[i].nome);
        printf("\n");
        printf("%s", c[i].numero_telefone);
        printf("\n");
        printf("%i", c[i].idade);
        printf("\n");
    }
}
    
int media_e_maiores(int n, struct Cliente c[n]){
    int soma = 0;
    int maiores = 0;
    float media = 0;
    
    for(int i = 0; i < n; i++){
        soma += c[i].idade;
        if(c[i].idade >= 18){
            maiores += 1;
        }
    }
    
    media = (float) soma/n;
    printf("Media: %.2f", media);
    printf("\n");
    
    if(maiores > 0){
        printf(">=18: %i", maiores);
    }else{
        printf("Nenhuma pessoa tem mais de 18 anos.");
    }
}

int mais_velho(int n, struct Cliente c[n]){ 
    int n_maior = 0;
    int idade_ref = 0;
    for(int i = 0; i < n; i++){
        if(c[i].idade > idade_ref){
            n_maior = i;
            idade_ref = c[i].idade;
        }
    }
    printf("\n");
    printf("O(A) mais velho(a): %s", c[n_maior].nome);
}

int main()
{
    int n;
    scanf("%i", &n);
    
    struct Cliente c[n];
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", c[i].nome);
        scanf(" %[^\n]", c[i].numero_telefone);
        scanf(" %i", &c[i].idade);
    }
    imprimir_dados(n, c);
    media_e_maiores(n, c);
    mais_velho(n, c);
    return 0;
}
