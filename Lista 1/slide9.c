#include <stdio.h>

void main(void) {
    unsigned char A=0x55; //0101 0101
	unsigned char B=0xF0; //1111 0000
	unsigned char X;
	
	X = A & B; //0101 0000
	printf("%d", X); //80
	
	X = A | B; //1111 0101
	printf("\n%d", X); //245
	
	X = A && B;
	printf("\n%d", X); //True = 1

	X = A || B;
	printf("\n%d", X); //True = 1
	
	X = B >> 4; //0000 1111
	printf("\n%d", X); // 15
	
	X = A << 1; //1010 1010
	printf("\n%d", X); //170
}