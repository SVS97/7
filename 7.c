#include <stdio.h>

int main(void)
{
	int N,D;										//Numbers and distance betweene sensors
	printf("Number of sensors N:\n");
	scanf_s("%i", &N);
	printf("Distance between sensors D:\n");
	scanf_s("%i", &D);

	int l = N * D;									// Length of the wire
	printf("Minimal length of the wire: %i \n", l);
	putc(l, stdout);								// O(n^2)
}