
#include <stdio.h>
int menuSecundario (float *Celsius, float *Kelvin, float *Fahrenheit);
void celsius (float celsius);
void kelvin (float kelvin);
void fahrenheit (float fahrenheit);

int main (void)
{
	float GradosCelsius = 0;
	float GradosKelvin = 0;
	float GradosFahrenheit = 0;
	char Selector = 0;
	int menu = 0;
	
	do
	{
		menu = menuSecundario (&GradosCelsius, &GradosKelvin, &GradosFahrenheit);
		printf("\n\n");
		switch (menu)
		{
			case 1:
				{
					celsius (GradosCelsius);
					break;	
				}
			case 2:
				{
					kelvin (GradosKelvin);
					break;	
				}
			case 3:
				{
					fahrenheit (GradosFahrenheit);
					break;	
				}
		}
		
		printf("\n");
		printf("Para realizar otra conversion teclea <s> y enter.\n");
		printf("Para salir precione cualquier tecla y enter.\n");
		scanf("%s",&Selector);
		printf("\n");
	}
	while (Selector =='s' ||  Selector =='S');
	
	system ("pause");
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
int menuSecundario (float *Celsius, float *Kelvin, float *Fahrenheit)
{
	int auxiliar = 0;
	int Selector1 = 0;

	do
	{
		printf("Seleccione la unidad de grados a ingresar:\n\n");
		printf("(1) Celsius.\n");
		printf("(2) Kelvin.\n");
		printf("(3) Fahrenheit.\n");
		scanf("%i",&Selector1);
	}
	while (Selector1 < 1 || Selector1 > 3);	
			
	switch(Selector1)
	{
		case 1:
			{
				printf("\n");
				printf("Grados Celsius.\n");
				printf("Ingresa los grados celsius: ");
				scanf("%f",&*Celsius);
				auxiliar = 1;
				break;
			}
		case 2:
			{
				printf("\n");
				printf("Grados Kelvin.\n");
				printf("Ingresa los grados kelvin: ");
				scanf("%f",&*Kelvin);
				auxiliar = 2;
				break;
			}
		case 3:
			{
				printf("\n");
				printf("Grados Fahrenheit.\n");
				printf("Ingresa los grados Fahrenheit: ");
				scanf("%f",&*Fahrenheit);
				auxiliar = 3;
				break;
			}
	}		
	return auxiliar;	
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void celsius (float celsius)
{
	int SelectorConversion = 0;
	float Resultado = 0;
	float ConstanteDeConversion1 = 273.15;
	float ConstanteDeConversion2 = 1.8;
	float ConstanteDeConversion3 = 32;
	
	printf("\n");

	
	do
	{
		printf("Seleccione la conversion:\n\n");
		printf("(1) Celsius a Kelvin.\n");
		printf("(2) Celsius a Fahrenheit.\n");
		scanf("%i",&SelectorConversion);			
	}
	while(SelectorConversion < 1 || SelectorConversion > 2);
	
	switch(SelectorConversion)
	{
		case 1:
			{

				printf("Celsius a Kelvin.\n");
				Resultado = celsius + ConstanteDeConversion1;
				printf ("%.3f C = %.3f K.\n",celsius,Resultado);
				break;
			}
		case 2:
			{
				printf("Celsius a Fahrenheit.\n");
				Resultado = (celsius * ConstanteDeConversion2) + ConstanteDeConversion3;
				printf ("%.3f C = %.3f F.\n",celsius,Resultado);
				break;
			}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void kelvin (float kelvin)
{
	int SelectorConversion = 0;
	float Resultado = 0;
	float ConstanteDeConversion1 = -273.15;
	float ConstanteDeConversion2 = 1.8;
	float ConstanteDeConversion3 = 32;
	
	do
	{
		printf("Seleccione la conversion:\n\n");
		printf("(1) Kelvin a Celsius.\n");
		printf("(2) Kelvin a Fahrenheit.\n");
		scanf("%i",&SelectorConversion);			
	}
	while(SelectorConversion < 1 || SelectorConversion > 2);
	
	switch(SelectorConversion)
	{
		case 1:
			{
				printf("Kelvin a Celsius.\n");
				Resultado = kelvin + ConstanteDeConversion1;
				printf ("%.3f K = %.3f F.\n",kelvin,Resultado);
				break;
			}
		case 2:
			{
				printf("Kelvin a Fahrenheit.\n");
				Resultado = ((kelvin + ConstanteDeConversion1)*ConstanteDeConversion2) + ConstanteDeConversion3;
				printf ("%.3f K = %.3f F.\n",kelvin,Resultado);
				break;
			}
	}	
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fahrenheit (float fahrenheit)
{
	int SelectorConversion = 0;
	float Resultado = 0;
	float ConstanteDeConversion1 = 1.8;
	float ConstanteDeConversion2 = 32;
	float ConstanteDeConversion3 = 273.15;
	
	do
	{
		printf("Seleccione la conversion:\n\n");
		printf("(1) Fahrenheit a Celsius.\n");
		printf("(2) Fahrenheit a Kelvin.\n");
		scanf("%i",&SelectorConversion);			
	}
	while(SelectorConversion < 1 || SelectorConversion > 2);
	
	switch(SelectorConversion)
	{
		case 1:
			{
				printf("Fahrenheit a Celsius.\n");
				Resultado = (fahrenheit - ConstanteDeConversion2) / ConstanteDeConversion1;
				printf ("%.3f F = %.3f C.\n",fahrenheit,Resultado);
				break;
			}
		case 2:
			{
				printf("Fahrenheit a Kelvin.\n");
				Resultado =((fahrenheit - ConstanteDeConversion2) / ConstanteDeConversion1) + ConstanteDeConversion3;
				printf ("%.3f F = %.3f K.\n",fahrenheit,Resultado);
				break;
			}
	}	
} 
