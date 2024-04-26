// 4. Construa uma algoritmo que tenha como dados de entrada o sexo e a altura de uma pessoa
// (M-masculino e F-feminino), e calcule seu peso ideal, utilizando as seguintes fórmulas:
// ● Para homens: (72.7*h) – 58, onde Para mulheres: (62.1*h) - 44.7
#include <stdio.h>
#include <string.h>

char masculino, feminino;

float altura, peso;

int main(){
    
    system("cls || clear");

    printf("Qual o seu sexo? Ex: masculino, feminino: \n");
    scanf("%s", &masculino, &feminino);
  
    printf("Qual a sua altura? \n");
    scanf("%f", &altura);

    if (masculino)
    {
        peso = (72.7 * altura) - 58;
    }
    else if (feminino)
    {
        peso = (62.1 * altura) - 47;
    }

    printf("O seu peso ideal e : %.2f \n", peso);

    return 0;
}
