#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
  
  double primer_numero, segundo_numero;
  char operador;
  printf("Que desea calcular: ");
  scan("%lf" "%lf", &primer_numero, &segundo_numero);
  printf("Elija su operador (+,-,*,/):" );
  scan("%c", &operador);

  switch (operador){
    case '+':
    printf("%.1lf + %.1lf = %.1lf", &primer_numero, &segundo_numero, primer_numero + segundo_numero);
    break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf", &primer_numero, &segundo_numero, primer_numero - segundo_numero);
    break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf", &primer_numero, &segundo_numero, primer_numero * segundo_numero);
    break;
    case '/':
    if(segundo_numero !=0){
       printf("%.1lf / %.1lf = %.1lf", &primer_numero, &segundo_numero, primer_numero / segundo_numero);
    }
      else{
        printf("No puedo dividir entre 0");
          }
      return 1;
    default:
    printf("Operador externo al programa");
  }
  system("pause");
  return 0;
}

