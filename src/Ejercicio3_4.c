/*
 ============================================================================
 Name        : Ejercicio3_4.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio 3_4 (Funciones)
 Description :

Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float returnNumero();
void mostrarNumero(int numero);
int validarNumero(int numero);

int main() {
	setbuf(stdout, NULL);
	float numero;

	numero = returnNumero();

	mostrarNumero(numero);

	return 0;
}

float returnNumero()
{
	float numero;

	printf("Ingrese un numero : ");
	scanf("%f", &numero);

	numero = validarNumero(numero);

	return numero;
}

void mostrarNumero(int numero)
{
	printf("El numero es : %d", numero);
}

int validarNumero(int numero)
{
	while(numero < 1 || numero > 100)
	{
		printf("El numero ingresado no es valido.");
		printf(" Ingrese un numero : ");
		scanf("%d", &numero);

	}
	return numero;
}
