#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contabancaria {
  int numero;
  float saldo;
  char titular[50];
};

struct contabancaria *cria_conta(int numeroConta, float saldoConta,
                                 char titularConta[]) {
  struct contabancaria *novaConta =
      (struct contabancaria *)malloc(sizeof(struct contabancaria));

  novaConta->saldo = saldoConta;
  novaConta->numero = numeroConta;
  strcpy(titularConta, novaConta->titular);

  return novaConta;
}

void deposita(struct contabancaria *conta, int deposito) {
  conta->saldo += deposito;
  printf("Valor depositado!");
}

void saca(struct contabancaria *conta, int saque) {
  if (conta->saldo < saque) {
    printf("Não há saldo suficiente para realizar o saque.");
  } else {

    conta->saldo -= saque;
  }
  printf("Valor sacado!");
}

void transfere(struct contabancaria *conta_origem,
               struct contabancaria *conta_destino, int valor) {

  if (conta_origem->saldo < valor) {
    printf("Não há saldo suficiente para realizar a transferencia.");
  } else {
    saca(conta_origem, valor);
    deposita(conta_destino, valor);
    printf("Transferencia realizada com sucesso");
  }
}

void saldo(struct contabancaria *conta) {
  printf("Saldo da conta: \t %f", conta->saldo);
}

void exclui_conta(struct contabancaria *conta) { free(conta); }
