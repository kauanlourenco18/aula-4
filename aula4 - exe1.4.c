#include <stdio.h>

int main() {
  float imc; 
  
  printf("Digite o IMC: ");
  scanf("%f", &imc);
  
  if( imc >= 18.5, imc <= 24.9  ) {
  puts("Intervalo normal");
    }  else {
    puts("Fora de intervalo normal ");
  }
  return 0;
}