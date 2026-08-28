#include <stdio.h>

int main() {
    char nome[50];
    int idade, quantidade;
    float saldo, precoProduto, valorTotal;

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", nome); 

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    printf("Digite o saldo disponivel (R$): ");
    scanf("%f", &saldo);

    printf("Digite o preco do produto (R$): ");
    scanf("%f", &precoProduto);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    valorTotal = precoProduto * quantidade;
    
    printf("Valor total da compra: R$ %.2f\n", valorTotal);

    if (idade >= 18 && saldo >= valorTotal) {
        printf("Aprovado: %s tem idade e saldo suficientes.\n", nome);
    } 
    else if (idade >= 18 && saldo < valorTotal) {
        printf("Negado: %s e maior de idade, mas NAO tem saldo suficiente.\n", nome);
    } 
    else if (idade < 18 && saldo >= valorTotal) {
        printf("Negado: %s tem saldo suficiente, mas NAO tem idade (menor de idade).\n", nome);
    } 
    else {
        printf("Negado: %s NAO tem idade e NAO tem saldo suficiente.\n", nome);
    }

    return 0;
}