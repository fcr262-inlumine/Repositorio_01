#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
  
  double primer_numero, segundo_numero;
  char operador;
  printf("Que desea calcular: ");
  scan("%lf" "%lf", &primer_numero, &segundo_numero);
  printf("Elija su operador (+,-,*,/): );
  scan("%c", &operador);

  switch (operador){
    case '+';
    printf("%.5lf + %.5lf = %.5lf", &primer_numero, %segundo_numero, primer_numero + segundo_numero);
    break;
    case '-';
    printf("%.5lf - %.5lf = %.5lf", &primer_numero, %segundo_numero, primer_numero - segundo_numero);
    break;
    case '*';
    printf("%.5lf * %.5lf = %.5lf", &primer_numero, %segundo_numero, primer_numero * segundo_numero);
    break;
    case '/';
    printf("%.5lf / %.5lf = %.5lf", &primer_numero, %segundo_numero, primer_numero / segundo_numero);
    break;
    default:
    printf("Operador externo al programa");
  }
  return 0;
}

