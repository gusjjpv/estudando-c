/*
variavel que guarda um endereço
tipo * nome_da_variavel_ponteiro;
int * ponteiro;
ponteiro = &valor

&

imprimindo o valor de um ponteiro
int * point
printf("%p\n", point)


*/

int valor = 2;
int * ponteiro;
ponteiro = &valor;
printf("%d, end = %p", valor, *ponteiro);
return 0;