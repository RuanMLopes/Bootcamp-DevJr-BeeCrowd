#include <stdio.h>

int main() {
    
	float preco [5] = {4.0,4.5,5.0,2.0,1.5};
	
	int X, Y;
	float Z;
	
	scanf("%d %d", &X, &Y);
	
	Z = preco[(X-1)] * Y;
	
	printf("Total: R$ %.2f\n", Z);
	
    return 0;
}