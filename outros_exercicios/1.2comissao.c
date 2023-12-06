#include <stdio.h>

int main()
{

    float comissao, totalVendas, comissaoFinal;
    printf("Informe quanto é sua comissão: ");
    scanf("%f", &comissao);

    comissao = comissao / 100;

    printf("Informe o total de dinheiro das vendas: ");
    scanf("%f", &totalVendas);

    comissaoFinal = totalVendas * comissao;

    printf("Sua comissão é:%.1f\n", comissaoFinal);

    return 0;
}