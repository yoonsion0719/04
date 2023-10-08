#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m,n;
	
	printf("input two integers :");
	scanf("%i %i", &m,&n);
	
	printf("+ result is %i\n", m+n);
	printf("- result is %i\n", m-n);
	printf("* result is %i\n", m*n);
	printf("/ result is %i\n", m/n);
	printf("%% result is %i\n", m%n);
	
	
	return 0;
}
