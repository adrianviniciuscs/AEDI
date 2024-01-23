#include <stdio.h>

enum Mes {
    JANEIRO,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

struct Data {
    int dia;
    enum Mes mes;
    int ano;
};

const char* obter_nome_mes(enum Mes mes) {
    switch (mes) {
        case JANEIRO:
            return "Janeiro";
        case FEVEREIRO:
            return "Fevereiro";
        case MARCO:
            return "Março";
        case ABRIL:
            return "Abril";
        case MAIO:
            return "Maio";
        case JUNHO:
            return "Junho";
        case JULHO:
            return "Julho";
        case AGOSTO:
            return "Agosto";
        case SETEMBRO:
            return "Setembro";
        case OUTUBRO:
            return "Outubro";
        case NOVEMBRO:
            return "Novembro";
        case DEZEMBRO:
            return "Dezembro";
        default:
            return "Mês Desconhecido";
    }
}

int main() {
    struct Data data;

    printf("Digite o dia: ");
    scanf("%d", &data.dia);

    int mes;
    printf("Digite o mês (1 para Janeiro, 2 para Fevereiro, ..., 12 para Dezembro): ");
    scanf("%d", &mes);
    data.mes = (enum Mes)(mes - 1);

    printf("Digite o ano: ");
    scanf("%d", &data.ano);

    printf("\nData Formatada: %02d/%02d/%04d\n", data.dia, data.mes + 1, data.ano);

    printf("Data com Nome do Mês: %02d de %s de %04d\n", data.dia, obter_nome_mes(data.mes), data.ano);

    return 0;
}

