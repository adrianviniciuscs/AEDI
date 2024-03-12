void bubblesort(int arr[],int n){
    int i , j; // Linha 1: Declaração de variáveis locais (complexidade O(1))
    for (i = 0; i < n-1; i++ ){ // Linha 2: Loop externo, executa n-1 vezes (complexidade O(n))
        for(j = 0; j < n - 1 -i; j++){ // Linha 3: Loop interno, executa (n-1-i) vezes em média (complexidade O(n))
            if (arr[j] > arr [ j + 1]) // Linha 4: Verificação da condição (complexidade O(1))
                swap(&arr[j], &arr[j + 1]); // Linha 5: Troca de elementos se a condição for verdadeira (complexidade O(1))
        }
    }
}
/*
 
 Complexidade de Tempo
 
T(BubbleSort)=(C1+C2)+(C3n-1)+(C4n-1)+(C5n-1)+(C6^2) + (C7n^2)+(C9n^2) + (C10n^2)+(C11n-1) + (C12n-1)
a = C1 + C2; 
b = (C3+C4+C5+C11+C12)n-1
c=(C6+C7+C8+C9+C10)n^2
a + (bn-1)+(cn^2)
Retirando a constante "a": (bn-1) + (cn^2)
Retirando a expressão de menor grau "bn-1": (cn^2)
Retirando o termo multiplicativo "c": n^2
T(BubbleSort) = n^2 

*/
