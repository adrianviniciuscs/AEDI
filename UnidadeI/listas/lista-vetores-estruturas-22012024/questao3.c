#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto ponto_inferior_esquerdo;
    float base;
    float altura;
};

struct Circulo {
    struct Ponto centro;
    float raio;
};

// Estrutura que pode armazenar um retângulo ou um círculo
struct Figura {
    int tipo; // 0 para retângulo, 1 para círculo
    union {
        struct Retangulo ret;
        struct Circulo circ;
    } dados;
};

struct Retangulo* ret_circunscrito(struct Circulo* c, float h);
struct Circulo* circ_interno(struct Retangulo* r);

int main() {
    struct Circulo circulo = {{0.0, 0.0}, 5.0};
    float altura_retangulo = 3.0;

    struct Retangulo* retangulo_circunscrito = ret_circunscrito(&circulo, altura_retangulo);
    struct Circulo* circulo_interno = circ_interno(retangulo_circunscrito);

    printf("Retângulo circunscrito:\n");
    printf("Base: %.2f\nAltura: %.2f\n", retangulo_circunscrito->base, retangulo_circunscrito->altura);
    printf("Círculo interno:\nRaio: %.2f\n", circulo_interno->raio);

    free(retangulo_circunscrito);
    free(circulo_interno);

    return 0;
}


struct Retangulo* ret_circunscrito(struct Circulo* c, float h) {
    // Calcula o lado do retângulo circunscrito
    float lado_retangulo = c->raio * sqrt(2);

    // Verifica se a altura especificada é menor que o diâmetro do círculo
    if (h >= 2 * c->raio) {
        printf("Erro: Altura especificada deve ser menor que o diâmetro do círculo.\n");
        return NULL;
    }

    // Aloca memória para o retângulo circunscrito
    struct Retangulo* retangulo = (struct Retangulo*)malloc(sizeof(struct Retangulo));

    // Define os pontos do retângulo circunscrito
    retangulo->ponto_inferior_esquerdo.x = c->centro.x - lado_retangulo / 2;
    retangulo->ponto_inferior_esquerdo.y = c->centro.y - h / 2;
    retangulo->base = lado_retangulo;
    retangulo->altura = h;

    return retangulo;
}

struct Circulo* circ_interno(struct Retangulo* r) {
    // Calcula o raio do círculo interno
    float raio_circulo = fmin(r->base, r->altura) / 2;

    // Aloca memória para o círculo interno
    struct Circulo* circulo = (struct Circulo*)malloc(sizeof(struct Circulo));

    // Define o centro do círculo interno
    circulo->centro.x = r->ponto_inferior_esquerdo.x + raio_circulo;
    circulo->centro.y = r->ponto_inferior_esquerdo.y + raio_circulo;

    // Define o raio do círculo interno
    circulo->raio = raio_circulo;

    return circulo;
}

