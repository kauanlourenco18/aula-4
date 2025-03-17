#include <stdio.h>

int main()
{
    float nota;
    char conceito;

    printf("Digite a nota do aluno [0-10]: ");
    scanf("%f", &nota);

    if (nota >= 9.0 && nota <= 10.0)
    {
        conceito = 'A';
    }
    else if (nota >= 8.0 && nota < 9.0)
    {
        conceito = 'B';
    }
    else if (nota >= 7.0 && nota < 8.0)
    {
        conceito = 'C';
    }
    else if (nota >= 6.0 && nota < 7.0)
    {
        conceito = 'D';
    }
    else if (nota >= 0.0 && nota < 6.0)
    {
        conceito = 'F';
    }
    else
    {
        printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
        return 0;
    }

    printf("O conceito do aluno é: %c\n", conceito);

    return 0;
}