#include "contabancaria.h"

int main(void){
    
    ContaBancaria* nova_conta = cria_conta(1, 500, "Jean");
    ContaBancaria* conta2 = cria_conta(2, 500, "Adrian");
    
    saldo(nova_conta);

    deposita(nova_conta, 150);
    saldo(nova_conta);

    saca(nova_conta, 100);
    saldo(nova_conta);

    saldo(conta2);

    transfere(nova_conta, conta2, 400);

    saldo(nova_conta);
    saldo(conta2);



    exclui_conta(nova_conta);
    exclui_conta(conta2);
    return 0;
};

