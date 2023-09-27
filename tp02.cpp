#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i*i <= num; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void encontrarPrimos(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (ehPrimo(i) && ehPrimo(n - i)) {
            printf("%d + %d\n", i, n - i);
            return;
        }
    }
    printf("N�o foi poss�vel encontrar uma decomposi��o como a soma de dois primos.\n");
}

int main() {
    int numero;

    printf("Digite um n�mero inteiro maior do que 2: ");
    scanf("%d", &numero);

    if (numero <= 2) {
        printf("O n�mero deve ser maior do que 2.\n");
        return 1;
    }

    encontrarPrimos(numero);

    return 0;
}
