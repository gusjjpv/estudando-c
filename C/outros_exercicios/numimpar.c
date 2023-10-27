#include <stdio.h>

int main()
{
  int num, cont;

  printf("informe o numero: \n");
  scanf("%d", &num);

  for(cont = 0; cont <= num; cont++){
    printf("%d\n", cont);

  }
    for(cont = num; cont <= num && cont > 0; cont--){
        printf("%d\n", cont);
    }

    return 0;

}