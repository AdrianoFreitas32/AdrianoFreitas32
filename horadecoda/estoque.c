
#include <stdio.h>

int main() {
    
    char produtoA[30] = "produto A";
    char produtoB[30] = "produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.30;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitario é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$%.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;

    printf("o produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("o produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    printf(" valor total de A (R$%.2f) é maior que ovalor total de B (R$%.2f)? %d\n", 
                            estoqueA * valorA,
                            estoqueB * valorB,
                 (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}