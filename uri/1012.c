/*
 * =====================================================================================
 *
 *       Filename:  1012.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  03/25/2017 07:17:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	printf("TRIANGULO: %.3f\n",(.50*a*c));
	printf("CIRCULO: %.3f\n", (PI*c*c));
	printf("TRAPEZIO: %.3f\n", (.50*c*(a+b)));
	printf("QUADRADO: %.3f\n", (b*b));
	printf("RETANGULO: %.3f\n", (a*b));

}
