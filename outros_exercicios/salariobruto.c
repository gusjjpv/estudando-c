#include <stdio.h>

int main(){
    float salarioBruto, salarioLiquido, imposto;

    printf("informe seu salario: ");
    scanf("%f", &salarioBruto);

    if(salarioBruto < 1000){
        imposto = salarioBruto * 0.05;
        salarioLiquido = salarioBruto - imposto;
        printf("Seu salario bruto é %.2f, e o liquido é %.2f", salarioBruto, salarioLiquido);

    } else if(salarioBruto >= 1000 && salarioBruto < 5000) {
        imposto = salarioBruto * 0.11;
        salarioLiquido = salarioBruto - imposto;
        printf("Seu salario bruto é %.2f, e o liquido é %.2f", salarioBruto, salarioLiquido);

    } else {
        imposto = salarioBruto * 0.35;
        salarioLiquido = salarioBruto - imposto;
        printf("Seu salario bruto é %.2f, e o liquido é %.2f", salarioBruto, salarioLiquido);
    }
}
