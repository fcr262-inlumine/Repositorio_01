int main(){
	
	double n1, n2;
	char operador;
	
	printf("Bienvenido a la calculadora =D ");
	printf("\n");
	printf("________________________________________________________________________________________________________________________");
	printf("\n");
	
	printf("Ingrese operacion: ");	
	scanf("%lf", &n1);
	scanf(" %c", &operador);
	scanf("%lf", &n2);
	
	
	switch (operador){
		case '+':
			printf("%.5lf + %.5lf = %.5lf", n1, n2, n1 + n2);
		break;
		case '-':
			printf("%.5lf - %.5lf = %.5lf", n1, n2, n1 - n2);
		break;
		case '*':
			printf("%.5lf * %.5lf = %.5lf", n1, n2, n1 * n2);
		break;
		case '/':
			printf("%.5lf / %.5lf = %.5lf\n", n1, n2, n1 / n2);
			
				if (n2 == 0){	
				puts("I cant divide it");
				}
		break;
			
		default:
			printf("Invalid character");
			
	}
		
	return 0;
}
