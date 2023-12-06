/*  
Em C, funções são blocos de código que realizam uma tarefa específica e podem ser chamadas de outros lugares do programa. 
Elas ajudam a organizar o código em partes menores, facilitando a leitura, manutenção e reutilização do código. 

Aqui está a sintaxe básica de uma função em C e um exemplo simples:

### Sintaxe de uma Função em C:

tipo_de_retorno nome_da_funcao(parâmetros) {
    // corpo da função
    // código para realizar a tarefa
    return valor_de_retorno; // (opcional) valor que a função retorna
}

- `tipo_de_retorno`: O tipo de dado que a função retorna (por exemplo, `int`, `float`, `void`).
OBS: quando n é informado o tipo, ela vai retornar como se fosse do tipo inteiro(int).
- `nome_da_funcao`: O nome dado à função para chamá-la posteriormente.
- `parâmetros`: Lista de variáveis que a função recebe como entrada (se houver).
OBS: sempre informe o tipo do parametro, para todos os parametros que colocar.
O numero e tipo dos argumentos enviados devem ser coincidentes com os parametros presentes no cabeçalho da função e são enviados na ordem.
ex.:
declaração:   funcao(char ch, int n, float x)
invocação:    funcao('a', 1, 2.5)

- `corpo da função`: O bloco de código dentro das chaves `{}` que realiza a tarefa da função.
- `return valor_de_retorno`: (opcional) Declaração para retornar um valor ao chamador da função. Esta parte é omitida para funções do tipo `void`.

### Exemplo de uma Função em C:

Aqui está um exemplo de uma função que calcula o fatorial de um número inteiro usando um loop `for`:
*/
#include <stdio.h>

int calcularFatorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);
    
    int fatorial = calcularFatorial(num);
    printf("O fatorial de %d é %d\n", num, fatorial);
    
    return 0;
}

/*Neste exemplo, a função `calcularFatorial()` recebe um número inteiro como parâmetro, calcula seu fatorial usando um loop `for`, e retorna o resultado. A função é então chamada dentro da função `main()`. Após a execução, o programa solicita um número, calcula seu fatorial usando a função `calcularFatorial()`, e imprime o resultado.

# Cada tem que ter um nome unico e o nome deve especificar aquilo que ela faz.
# Cada função deve realizar uma unica tarefa bem definida.

##uma função pode ser usada no if:
if(soma(x,y)>0){}

#RETURN

Em programação, quando você cria uma função, essa função geralmente realiza alguma tarefa e pode precisar retornar um valor para o local no programa que a chamou.
É como se a função dissesse: "Aqui está o resultado do trabalho que fiz para você."

A instrução `return` é usada para fazer isso. Ela é usada para **enviar de volta um valor da função para o código que chamou a função**.
Aqui está uma explicação passo a passo:

1. **Definindo uma Função:**
   Quando você define uma função em C (ou em muitas outras linguagens de programação), você precisa especificar qual tipo de valor a função vai retornar. 
   Por exemplo, se a função calcula um número inteiro, você usa `int` como tipo de retorno. Se não estiver retornando nada, você usa `void`.

   int soma(int a, int b) {
       int resultado = a + b;
       return resultado; // Esta função retorna um número inteiro
   }

2. **Calculando e Retornando o Valor:**
   No exemplo acima, a função `soma` recebe dois inteiros como entrada, os adiciona e armazena o resultado na variável `resultado`. 
   Em seguida, a instrução `return resultado;` é usada para enviar esse valor de volta ao local onde a função foi chamada.

3. **Recebendo o Valor de Retorno:**
   Quando você chama a função, você pode capturar o valor retornado e usá-lo em seu código.

   int main() {
       int x = 5;
       int y = 10;
       int resultado = soma(x, y); // A função soma é chamada aqui e seu resultado é armazenado em 'resultado'
       printf("A soma de %d e %d é %d", x, y, resultado);
       return 0;
   }

No exemplo acima, o valor retornado pela função `soma` é 15 (porque 5 + 10 é 15) e é usado na instrução `printf` dentro da função `main`.

Em resumo, `return` é usado para enviar de volta um valor calculado pela função para onde a função foi chamada 
permitindo que você use o resultado do trabalho da função em outras partes do seu programa.


                    #PROCEDIMENTOS


Em C, os procedimentos são blocos de código que realizam uma tarefa específica, mas não retornam um valor ao local no programa que os chamou. 
Eles são também chamados de **funções sem retorno** ou **funções de tipo `void`**. 
Procedimentos são úteis quando você precisa executar uma série de instruções sem a necessidade de calcular ou retornar um valor específico.

Aqui está a estrutura básica de um procedimento em C:

void nomeDoProcedimento(parâmetros) {
    // corpo do procedimento
    // código para realizar uma tarefa
    // não há instrução 'return' para retornar um valor
}

- **`void`**: Indica que o procedimento não retorna nenhum valor.
- **`nomeDoProcedimento`**: O nome dado ao procedimento para chamá-lo posteriormente.
- **`parâmetros`**: Lista de variáveis que o procedimento pode receber como entrada (se houver).

Um exemplo simples de procedimento pode ser um que imprime uma mensagem na tela:

#include <stdio.h>

void saudacao() {
    printf("Olá, mundo!\n");
}

int main() {
    saudacao(); // Chamando o procedimento
    return 0;
}

Neste exemplo, `saudacao()` é um procedimento que não recebe nenhum parâmetro e não retorna nenhum valor. 
Quando chamado dentro da função `main()`, ele imprime "Olá, mundo!" na tela.

OBS: Sempre que se quer sair de um procesimento, usa-se a intrução return sem qualquer valor ou expressão seguinte.
A instrução return termina a execução do procedimento, e o controle do programa é devolvido ao local onde o procedimento foi invocado.

Os procedimentos são úteis para organizar seu código, dividindo-o em partes menores e mais gerenciáveis 
especialmente quando você tem uma sequência de operações que precisa ser executada várias vezes no programa.


###PROTOTIPO


Em C, um protótipo de função é uma declaração que informa ao compilador sobre a existência de uma função antes que ela seja definida. Isso permite que a função seja chamada em outras partes do programa antes de sua definição real. A utilização de protótipos de função é especialmente útil quando as funções estão definidas após o `main` ou quando há chamadas de funções entre diferentes arquivos de origem (`.c`).

A sintaxe para um protótipo de função é semelhante à definição de uma função, mas sem o corpo da função. Um protótipo de função geralmente é colocado no início do arquivo de código ou em um arquivo de cabeçalho (`.h`). A estrutura básica de um protótipo de função é a seguinte:

tipo_de_retorno nome_da_funcao(parâmetros);

Aqui está um exemplo de como você pode usar um protótipo de função:

// Protótipo da função
int soma(int a, int b);

int main() {
    int resultado = soma(3, 5); // Chamando a função antes de sua definição
    printf("Resultado: %d\n", resultado);
    return 0;
}

// Definição real da função
int soma(int a, int b) {
    return a + b;
}

Neste exemplo, o protótipo `int soma(int a, int b);` é colocado no início do arquivo para informar ao compilador que existe uma função chamada `soma` que retorna um inteiro e aceita dois argumentos inteiros. O `main()` chama a função `soma` antes de sua definição real no código. Em seguida, a função `soma` é definida depois da função `main()`. Este é um exemplo básico, mas protótipos de função são vitais em programas maiores e mais complexos para garantir que as funções sejam chamadas e usadas corretamente.
*/


