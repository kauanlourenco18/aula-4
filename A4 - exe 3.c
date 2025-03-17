#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;

    printf("Digite o peso [kg]: ");
    scanf("%f", &peso);

    printf("Digite a altura [m]: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 16)
    {
        printf("Diagnóstico: Magreza grau III\n");
    }
    else if (imc >= 16 && imc < 17)
    {
        printf("Diagnóstico: Magreza grau II\n");
    }
    else if (imc >= 17 && imc < 18.5)
    {
        printf("Diagnóstico: Magreza grau I\n");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Diagnóstico: Eutrofia (peso saudável)\n");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Diagnóstico: Sobrepeso\n");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Diagnóstico: Obesidade grau I\n");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Diagnóstico: Obesidade grau II\n");
    }
    else
    {
        printf("Diagnóstico: Obesidade grau III\n");
    }

    return 0;
}