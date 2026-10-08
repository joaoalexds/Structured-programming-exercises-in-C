#include <stdio.h>

int main()
{
    int n;
    
    scanf("%i", &n);
    
    int f[n], b[n], b_sorted[n], e[n*2];
    
    for(int i = 0; i < n; i++){
        scanf("%i", &f[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%i", &b[i]);
        b_sorted[i] = b[i];
    }
    
    //Bubble sort
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(b_sorted[j] < b_sorted[j+1]){
                int temp = b_sorted[j];
                b_sorted[j] = b_sorted[j+1];
                b_sorted[j+1] = temp;
            }
        }
    }
    
    int idx = 0;
    for(int i = 0; i < n; i++){
        e[idx++] = f[i];
        e[idx++] = b_sorted[i];
    }
    
    printf("F: ");
    for(int i = 0; i < n; i++){
        printf("%i ", f[i]);
    }
    printf("\n");
    printf("B: ");
    for(int i = 0; i < n; i++){
        printf("%i ", b[i]);
    }
    printf("\n");
    printf("B*: ");
    for(int i = 0; i < n; i++){
        printf("%i ", b_sorted[i]);
    }
    printf("\n");
    printf("E: ");
    for(int i = 0; i < n*2; i++){
        printf("%i ", e[i]);
    }
    return 0;
}
