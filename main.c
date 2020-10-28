#include <stdio.h>

int main(void) {
 /*
 Elabore um algoritmo para entrar com 4 notas. Exiba a média aritmética das notas. Caso a média seja maior ou igual a 7, anuncie que o aluno foi aprovado. Caso contrário, está reprovado.
*/
  float n1,n2,n3,n4;
  char nomeAluno[30];
  float media;

  printf("Digite o nome do Aluno\n");
  scanf("%s", nomeAluno);
  printf("Digite a n1 do aluno\n");
  scanf("%f",&n1);
   printf("Digite a n2 do aluno\n");
   scanf("%f",&n2);
   printf("Digite a n3 do aluno\n");
   scanf("%f", &n3);
   printf("Digite a n4 do aluno\n");
   scanf("%f", &n4);

media=(n1+n2+n3+n4)/4;
  if (media>=7) {
    printf("Sua media e %f e voce foi aprovado",media);
  } else{
    printf("Sua media e de %f e voce foi reprovado",media);
    }
  return 0;
}