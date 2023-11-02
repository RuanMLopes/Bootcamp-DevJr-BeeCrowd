#include <stdio.h>

int main() {
    int X = 0;
	float Y, Z;
	
	scanf("%d", &X);
	scanf("%f", &Y);
	
	Z = (float)X / Y;
	
	printf("%.3f km/l\n", Z);

    return 0;
}