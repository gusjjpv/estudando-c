// biblioteca <locale.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    // coloca este comando.
    setlocale(LC_ALL, "Portuguese_Brazil");

    return 0;
}

/* Recomendo copiar/salvar o codigo em outro lugar, pq da um certo bug visual nas acentua��es.
 Por ultimo, na barra inferior va em 'UTF-8', depois em 'reabrir com codifica��o', procure por 'ISO', agora escolha 'Western(ISO 8859-1)'*/
