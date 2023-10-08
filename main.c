#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	unsigned int x;
	int n;
	
	printf("input the number : ");
	scanf("%i", &x);
	
	for (n=0; x!=0; x>>=1)
	{
		if (x & 1)
		{
			n++;
		}
	}
	
	printf("The result is : %i\n", n);
	
	
	return 0;
}
