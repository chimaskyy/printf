#include <stdio.h>
#include "main.h"

int main (void)
{	
	int num1;
	int num2;

	num1 = _printf("A %s sentence\n", "simple");
	num2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	num1 = _printf("Percentage: %%\n");
	num2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", num1);
	printf("Len1:[%d]\n\n", num2);

	return (0);
}
