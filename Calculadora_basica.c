#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double first_number, second_number;
	char operator;
	
	
	printf("Welcome to Calculator =D \n");
	
	printf("Enter first number: ");
	scanf("%lf", &first_number);
	
	printf("Enter second number: ");
	scanf("%lf", &second_number);
	
	printf("Enter operator (+,-,*,/): ");
	scanf(" %c", &operator);
	
	switch (operator){
		case '+':
			printf("%.5lf %.5lf = %.5lf", first_number, second_number, first_number + second_number);
		break;
		case '-':
			printf("%.5lf %.5lf = %.5lf", first_number, second_number, first_number - second_number);
		break;
		case '*':
			printf("%.5lf %.5lf = %.5lf", first_number, second_number, first_number * second_number);
		break;
		case '/':
			printf("%.5lf %.5lf = %.5lf", first_number, second_number, first_number / second_number);
		break;
		default:
			printf("!ERROR!");
			
	}
	
	return 0;
}
