/* Classifique um número inteiro como pequeno (menos de 10), médio (entre 10 e 50) ou grande (acima de 50).

a. Se for pequeno ou médio, verificar se é PAR ou ÍMPAR
b. Se for grande, somar mais 13 e em seguida divida o resultado por 2. Informar se é PAR ou ÍMPAR */

#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    // Classifica o número como pequeno, médio ou grande
    if (numero < 10) {
        printf("Classificacao: Pequeno\n");
        // Verifica se é par ou ímpar
        if (numero % 2 == 0) {
            printf("O numero %d e PAR.\n", numero);
        } else {
            printf("O numero %d e IMPAR.\n", numero);
        }
    } else if (numero >= 10 && numero <= 50) {
        printf("Classificacao: Medio\n");
        // Verifica se é par ou ímpar
        if (numero % 2 == 0) {
            printf("O numero %d e PAR.\n", numero);
        } else {
            printf("O numero %d e IMPAR.\n", numero);
        }
    } else {
        printf("Classificacao: Grande\n");
        // Realiza a operação para números grandes e verifica se o resultado é par ou ímpar
        int resultado = (numero + 13) / 2;
        if (resultado % 2 == 0) {
            printf("Apos somar 13 e dividir por 2, o resultado e PAR.\n");
        } else {
            printf("Apos somar 13 e dividir por 2, o resultado e IMPAR.\n");
        }
    }

    return 0;
}