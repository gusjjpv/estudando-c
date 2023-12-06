#include <stdio.h>

int main() {
    float salario, taxa;
    char est_civil;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    printf("Informe seu estado civil:\n'C' para casado ou 'S' para solteiro\n");
    scanf(" %c", &est_civil); // Adicionei um espaço antes de %c para consumir caracteres em branco

    if (est_civil == 'C' || est_civil == 'c') {
        taxa = salario * 0.09;
        printf("A taxa é de 9%% para casados, no valor de %.2f\n", taxa);
    } else if (est_civil == 'S' || est_civil == 's') {
        taxa = salario * 0.10;
        printf("A taxa é de 10%% para solteiros, no valor de %.2f\n", taxa);
    } else {
        printf("Estado civil incorreto\n");
    }

    return 0;
}
