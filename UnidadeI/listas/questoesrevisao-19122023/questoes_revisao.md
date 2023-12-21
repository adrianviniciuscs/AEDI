# Questões para revisão 

## 1. Ponteiross 

    01. Suponha que v é um vetor. Descreva a diferença conceitual entre as expressões v[2] e v+2.

    02. Suponha que os elementos do vetor v são do tipo int e cada int ocupa 4 bytes no seu computador. Se o endereço de v[0] é 55000, qual o valor da expressão v+3. 



# Resposta
### 1.
v[2] acessa o terceiro elemnto do vetor, o elemento de índice 2. enquanto a expressão v + 2 acessa dois endereços de memória a frente do endereço de memória de v, que seria v[2], ou o terceiro elemento do vetor.
neste caso, as duas formas retornam o mesmo elemento, por v[0] ser onde o vetor começa, dois endereços de memória a frente é o mesmo de acessar o índice 2. 


## 2. Alocação dinâmica

    01. Escreva uma função que receba dois vetores como entrada e retorne um novo vetor que contenha a soma dos elementos correspondentes dos vetores de entrada.
    
    02. Escreva uma função que receba duas strings como entrada e retorne uma nova string que seja a concatenação das duas. 

```
#include <stdio.h>
#include <stdlib.h>

int *somaVetor(int tamanho, int *vetor1, int *vetor2) {
  int i;
  int *vetorSoma = (int *)malloc(tamanho * sizeof(int));

  int soma = 0;
  for (i = 0; i < tamanho; i++) {
    soma = vetor1[i] + vetor2[i];
    vetorSoma[i] = soma;
  };

  return vetorSoma;
}

int main() {
  int tamanho;
  int i;

  printf("Insira o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int *vetor = malloc(tamanho * sizeof(int));
  int *vetor2 = malloc(tamanho * sizeof(int));

  for (i = 0; i < tamanho; i++) {
    printf("Insira o elemento %d do primeiro vetor: ", i);
    scanf("%d", &vetor[i]);
  }
  for (i = 0; i < tamanho; i++) {
    printf("Insira o elemento %d do segundo vetor: ", i);
    scanf("%d", &vetor2[i]);
  }

  int * vetorSoma = somaVetor(tamanho, vetor, vetor2);
  

  printf("Vetor soma: \n");
  for (i = 0; i < tamanho; i++) {
    printf("%d \n", vetorSoma[i]);
  }

}

    
```


```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenarStrings(const char *str1, const char *str2) {
  size_t len_str1 = strlen(str1);
  size_t len_str2 = strlen(str2);
  size_t len_total = len_str1 + len_str2 + 1; // +1 para o caractere nulo

  char *novaString = (char *)malloc(len_total * sizeof(char));

  if (novaString == NULL) {
    perror("Erro ao alocar memória");
    exit(EXIT_FAILURE);
  }

  strcpy(novaString, str1);
  strcat(novaString, str2);

  return novaString;
}

int main() {
  char primeiraString[100];  
  char segundaString[100];   
  
  printf("Insira a primeira string: ");
  scanf(" %[^\n]", primeiraString);

  printf("Insira a segunda string: ");
  scanf(" %[^\n]", segundaString);

  char *resultado = concatenarStrings(primeiraString, segundaString);

  printf("Resultado da concatenação: %s\n", resultado);

  free(resultado);

  return 0;
}

```

Lembre-se de usar `malloc()` para alocar memória dinamicamente e `free()` para liberar a memória alocada quando ela não for mais necessária.

## 3. Structs 

Você precisa criar um programa para armazenar informações sobre diferentes tipos de frutas. Crie uma struct chamada "Fruta" com os seguintes campos: nome (string), cor (string), sabor (string) e quantidade (int).

Em seguida, escreva um programa que permita ao usuário cadastrar várias frutas, armazenando-as em um vetor de structs. O programa deve ter as seguintes funcionalidades:

* Cadastrar uma nova fruta: Solicitar ao usuário que insira o nome, cor, sabor e quantidade da fruta. Em seguida, adicionar a fruta ao array de structs.

* Listar todas as frutas cadastradas: Imprimir na tela todas as informações das frutas cadastradas até o momento.

* Buscar fruta por nome: Solicitar ao usuário que insira o nome de uma fruta. O programa deve buscar no array de structs por todas as frutas com esse nome e imprimir suas informações.





