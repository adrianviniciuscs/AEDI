typedef struct contabancaria ContaBancaria;

/* Cria conta bancaria e retorna o endereço da instância da strucct
 *
 */
ContaBancaria *cria_conta(int numeroConta, float saldoConta,
                          char titularConta[]);

/*
 * Deposita um valor na conta bancaria informada
 */
void deposita(ContaBancaria *conta, int deposito);
/*
 * Saca um valor da conta bancaria informada
 */
void saca(ContaBancaria *conta, int saque);
/*
 * Transfere um valor de uma conta bancaria para outra
 */
void transfere(ContaBancaria *conta_origem, ContaBancaria *conta_destino,
               int valor);

/*
 * Exclui uma conta bancaria, liberando seu espaço de memória
 */
void exclui_conta(ContaBancaria *conta);
/*
 * Exibe o saldo da conta bancaria informada
 */
void saldo(ContaBancaria *conta);
