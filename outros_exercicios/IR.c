/*#include <stdio.h>
  #include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float ht, salario, dir, salarioDescontado;
    printf("Informe o total de horas trabalhadas: ");
    
    scanf("%f", &ht);
    
    salario = 19.50 * ht;

    dir = 25 / 100;

    salarioDescontado = dir * salario;

    

    if (salario > 2500)
    {
        salario = salario - salarioDescontado;
        printf("o desconto foi de %f", salarioDescontado);
        printf("%f ", salario);
    }

    return 0;
} */

#include <stdio.h>
 int main() {
    float h, s, d;

    printf("horas? ");
    scanf("%f", &h);

    s = 19.50 * h;

    if(s > 2500.00) {
        d = 0.25*s;
        printf("Desconto = R$ %.2f\n", d);
        s = s - d;
    }

    printf("Salario = R$ %.2f\n", s);

    return 0;
 }