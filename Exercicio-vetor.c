#include <stdio.h>

int main() {
    int numeros[6];
    int contagem[6] = {0};

    // Solicitar os números ao usuário
    for (int i = 0; i < 6; i++) {
        printf("Digite o número: ");
        scanf("%d", &numeros[i]);
    }

    // Contar a quantidade de ocorrências de cada número
    for (int i = 0; i < 6; i++) {
        int contador = 0;
        for (int j = 0; j < 6; j++) {
            if (numeros[j] == numeros[i]) {
                contador++;
            }
        }
        contagem[i] = contador;
    }

    // Imprimir a quantidade de vezes que cada número foi digitado
    for (int i = 0; i < 6; i++) {
        printf("%d ", contagem[i]);
    }

    return 0;
}