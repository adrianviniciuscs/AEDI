#include <stdio.h>

int somaEntreNUmeros(int n1, int n2) {
    int soma = 0;

    for (int i = n1; i <= n2; i++) {
        soma = soma + i;
    }

    return soma;
}


int main() {

    int n1, n2;


printf("Insira o primeiro valor:");
scanf("%d", &n1);
printf("Insira o segundo valor:");
scanf("%d", &n2);

int result = somaEntreNUmeros(n1, n2);

printf("Soma dos números entre %d e %d: %d\n", n1, n2, result);


}
