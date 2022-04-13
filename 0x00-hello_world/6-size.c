#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	int boardAux[length][length];
	memset(boardAux, 0, sizeof(boardAux) );

	printf("Size of a char; %p byte(s)\n", sizeof(acharacter));
	printf("Size of an int; %p byte(s)\n", sizeof(ainteger));
	printf("Size of a lon int; %p byte(s)\n", sizeof(along));
	printf("Size of a long long int; %p byte(s)\n", sizeof(alonlong));
	printf("Size of a float; %p byte(s)\n", sizeof(afloat));
	return  (0);

}
